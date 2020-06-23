#pragma once

#include "GameObject.h"

#define ITEM_DISAPPEAR_TIME		5000

class Items : public CGameObject
{
protected:
	DWORD disappearStart;
public:
	Items();
	~Items();

	virtual void GetBoundingBox(float &left, float &top, float &right, float &bottom) = 0;
	virtual void Render();
	virtual void Update(DWORD dt, vector<LPGAMEOBJECT> *coObjects);

	void StartDisappear();
};
