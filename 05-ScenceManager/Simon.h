#pragma once

#include "GameObject.h"
#include "define.h"
#include "Goomba.h"
#include "TransparentObjects.h"
#include "Utils.h"

#define MARIO_UNTOUCHABLE_TIME 5000
#define MARIO_JUMP_DEFLECT_SPEED 0.2f
#define SIMON_DIE_DEFLECT_SPEED	 0.5f

#define SIMON_STATE_IDLE				0
#define SIMON_STATE_WALKING_RIGHT		1
#define SIMON_STATE_WALKING_LEFT		2
#define SIMON_STATE_JUMP				3
#define SIMON_STATE_DIE					4
#define SIMON_STATE_SIT					5
#define SIMON_STATE_ATTACK				6
#define SIMON_STATE_SIT_ATTACK			7
#define SIMON_STATE_ATTACK_SUBWEAPON	8
#define SIMON_STATE_UPSTAIR				9
#define SIMON_STATE_DOWNSTAIR			10
#define SIMON_STATE_ATTACK_ON_STAIR		11
#define SIMON_STATE_INJURED				12
#define SIMON_STATE_FLASH				13

#define SIMON_ANI_IDLE_RIGHT					0
#define SIMON_ANI_IDLE_LEFT						1
#define SIMON_ANI_WALK_RIGHT					2
#define SIMON_ANI_WALK_LEFT						3
#define SIMON_ANI_ATTACK_RIGHT					4
#define SIMON_ANI_ATTACK_LEFT					5
#define SIMON_ANI_SIT_RIGHT						6
#define SIMON_ANI_SIT_LEFT						7
#define SIMON_ANI_SIT_ATTACK_RIGHT				8
#define SIMON_ANI_SIT_ATTACK_LEFT				9
#define SIMON_ANI_DIE							10
#define SIMON_ANI_IDLE_UPSTAIR_RIGHT			11
#define SIMON_ANI_IDLE_UPSTAIR_LEFT				12
#define SIMON_ANI_IDLE_DOWNSTAIR_RIGHT			13
#define SIMON_ANI_IDLE_DOWNSTAIR_LEFT			14
#define SIMON_ANI_WALK_UPSTAIR_RIGHT			15
#define SIMON_ANI_WALK_UPSTAIR_LEFT				16
#define SIMON_ANI_WALK_DOWNSTAIR_RIGHT			17
#define SIMON_ANI_WALK_DOWNSTAIR_LEFT			18
#define SIMON_ANI_ATTACK_UPSTAIR_RIGHT			19
#define SIMON_ANI_ATTACK_UPSTAIR_LEFT			20
#define SIMON_ANI_ATTACK_DOWNSTAIR_RIGHT		21
#define SIMON_ANI_ATTACK_DOWNSTAIR_LEFT			22
#define SIMON_ANI_INJURED_RIGHT					23
#define SIMON_ANI_INJURED_LEFT					24
#define SIMON_ANI_FLASH_RIGHT					25
#define SIMON_ANI_FLASH_LEFT					26

class Simon: public CGameObject
{
	Simon();

	static Simon* __instance;

	bool isOnAir;
	int untouchable;

	DWORD untouchableStart;
	DWORD attackStart;
public:
	~Simon();

	static Simon* GetInstance();

	void Jump();
	void StartAttack();

	virtual void Update(DWORD dt, vector<LPGAMEOBJECT> *colliable_objects = NULL);
	virtual void Render();
	void SetState(int state);
	void StartUntouchable() { untouchable = 1; untouchableStart = GetTickCount(); }

	float GetX() { return this->x; }
	float GetY() { return this->y; }
	virtual void GetBoundingBox(float &left, float &top, float &right, float &bottom);

	bool IsOnAir() { return isOnAir; }
	DWORD GetTimeStartAttack() { return attackStart; }
};
