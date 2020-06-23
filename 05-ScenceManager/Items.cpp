#include "Items.h"



Items::Items()
{
	disappearStart = 0;
}


Items::~Items()
{
}

void Items::Render()
{
	animations[0]->Render(x, y);
}

void Items::Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects)
{
	//DebugOut(L"[INFO] Item update\n");
	CGameObject::Update(dt, coObjects);

	vector<LPCOLLISIONEVENT> coEvents;
	vector<LPCOLLISIONEVENT> coEventsResult;

	coEvents.clear();

	vector<LPGAMEOBJECT> wallObjects;

	//DebugOut(L"---coobject size: %d\n", coObjects->size());

	for (int i = 1; i < coObjects->size(); i++) {
		if (coObjects->at(i)->GetId() == ID_WALL)
			wallObjects.push_back(coObjects->at(i));
	}
		

	CalcPotentialCollisions(&wallObjects, coEvents);

	// No collision occured, proceed normally
	if (coEvents.size() == 0)
	{
		//DebugOut(L"----No collision\n");
		x += dx;
		y += dy;
	}
	else
	{
		float min_tx, min_ty, nx = 0, ny;
		float rdx = 0;
		float rdy = 0;

		FilterCollision(coEvents, coEventsResult, min_tx, min_ty, nx, ny, rdx, rdy);

		//DebugOut(L"-----ny: %f\n", ny);

		// block 
		y += min_ty * dy + ny * 0.4f;

		if (ny != 0)
		{
			vx = 0;
			vy = 0;
			isOnGround = true;
			StartDisappear();
		}
	}

	// clean up collision events
	for (UINT i = 0; i < coEvents.size(); i++) delete coEvents[i];
	coEvents.clear();

	if (GetTickCount() - disappearStart > ITEM_DISAPPEAR_TIME && disappearStart > 0)
		SetState(STATE_DESTROYED);
}

void Items::StartDisappear()
{
	disappearStart = GetTickCount();
}