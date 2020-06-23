#pragma once

#include "Items.h"

#define SMALL_HEART_GRAVITY			0.0003f
#define SMALL_HEART_BBOX_WIDTH		8
#define SMALL_HEART_BBOX_HEIGHT		8

#define SMALL_HEART_DELTA_X			0.0436f
#define SMALL_HEART_AMPLITUDE_X		15

class SmallHeart :
	public Items
{
	float originX;
	float delta;
public:
	SmallHeart(D3DXVECTOR2 position);
	~SmallHeart();

	virtual void GetBoundingBox(float & left, float & top, float & right, float & bottom);
	virtual void Update(DWORD dt, vector<LPGAMEOBJECT> *coObjects);
};
