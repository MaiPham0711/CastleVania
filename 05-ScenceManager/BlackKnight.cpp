#include "BlackKnight.h"


BlackKnight::BlackKnight(D3DXVECTOR2 position, int nx, int idReward, int edge)
{
	this->x = position.x;
	this->y = position.y;
	this->idReward = idReward;
	this->nx = nx;
	vx = BLACK_KNIGHT_WALKING_SPEED;
	//health = 2;
	state = ENEMY_STATE_ACTIVE;
	edgeLeft = position.x;
	edgeRight = edge;

	id = ID_BLACK_KNIGHT;

	AddAnimation(ID_ANI_BLACK_KNIGHT_RIGHT);
	AddAnimation(ID_ANI_BLACK_KNIGHT_LEFT);
}

BlackKnight::~BlackKnight()
{
}

void BlackKnight::Render()
{
	int ani;

	switch (state)
	{
	case ENEMY_STATE_ACTIVE:
		if (nx > 0)
			ani = BLACK_KNIGHT_ANI_WALKING_RIGHT;
		else
			ani = BLACK_KNIGHT_ANI_WALKING_LEFT;
		break;
	case ENEMY_STATE_HITTED:
		ani = ENEMY_ANI_HITTED;
		break;
	default:
		break;
	}

	animations[ani]->Render(x, y);
}

void BlackKnight::Update(DWORD dt, vector<LPGAMEOBJECT> *nonGridObject, set<LPGAMEOBJECT> gridObject)
{
	Enemy::Update(dt, nonGridObject, gridObject);

	if (x < edgeLeft) {
		nx = 1;
		vx = BLACK_KNIGHT_WALKING_SPEED;
	}
	else if (x > edgeRight) {
		nx = -1;
		vx = -BLACK_KNIGHT_WALKING_SPEED;
	}
	x += dx;
}

void BlackKnight::GetBoundingBox(float & left, float & top, float & right, float & bottom)
{
	if (state != ENEMY_STATE_HITTED) {
		left = x;
		top = y;
		right = x + BLACK_KNIGHT_BBOX_WIDTH;
		bottom = y + BLACK_KNIGHT_BBOX_HEIGHT;
	}
	else
		left = top = right = bottom = 0;
}
