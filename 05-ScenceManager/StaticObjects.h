#pragma once

#include "GroundObject.h"
#include "Items.h"
#include "BigHeart.h"
#include "WhipUpgrade.h"
#include "ItemDagger.h"
#include "ItemBoomerang.h"
#include "SmallHeart.h"
#include "MoneyBag.h"
#include "ItemAxe.h"

#define STATIC_OBJ_STATE_NORMAL		0
#define STATIC_OBJ_STATE_HITTED		1

class StaticObjects : public GroundObject
{
protected:
	DWORD hitEffectStart;
	bool isDropped;
public:
	StaticObjects();
	~StaticObjects();

	virtual void Update(DWORD dt, vector<LPGAMEOBJECT> *nonGridObject, set<LPGAMEOBJECT> gridObject);
	virtual void Render();
	virtual void IsHitted();

	int GetHitEffectTime() { return hitEffectStart; }
};

