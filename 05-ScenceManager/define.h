#pragma once

//Windown
#define WINDOW_CLASS_NAME L"SampleWindow"
#define MAIN_WINDOW_TITLE L"Castle Vania"

#define BACKGROUND_COLOR D3DCOLOR_XRGB(255, 255, 255)
#define SCREEN_WIDTH			272
#define SCREEN_HEIGHT			264

#define MAX_FRAME_RATE			120

//ID object
#define ID_SIMON				0
#define ID_WHIP					1

#define ID_WALL					10
#define ID_PORTAL				11
#define ID_TORCH				12
#define ID_HIDDEN_OBJECTS		13

//ID textuters
#define ID_TEX_TILE_SCENE01		-1
#define ID_TEX_SIMON			0
#define ID_TEX_ENEMY			10
#define ID_TEX_MISC				20
#define ID_TEX_WHIP				1

//Id animation of simon
#define ID_ANI_SIMON_IDLE_RIGHT					100
#define ID_ANI_SIMON_IDLE_LEFT					101
#define ID_ANI_SIMON_WALK_RIGHT					102
#define ID_ANI_SIMON_WALK_LEFT					103
#define ID_ANI_SIMON_ATTACK_RIGHT				104
#define ID_ANI_SIMON_ATTACK_LEFT				105
#define ID_ANI_SIMON_SIT_RIGHT					106
#define ID_ANI_SIMON_SIT_LEFT					107
#define ID_ANI_SIMON_SIT_ATTACK_RIGHT			108
#define ID_ANI_SIMON_SIT_ATTACK_LEFT			109
#define ID_ANI_SIMON_DIE						110
#define ID_ANI_SIMON_IDLE_UPSTAIR_RIGHT			121
#define ID_ANI_SIMON_IDLE_UPSTAIR_LEFT			122
#define ID_ANI_SIMON_IDLE_DOWNSTAIR_RIGHT		123
#define ID_ANI_SIMON_IDLE_DOWNSTAIR_LEFT		124
#define ID_ANI_SIMON_WALK_UPSTAIR_RIGHT			125
#define ID_ANI_SIMON_WALK_UPSTAIR_LEFT			126
#define ID_ANI_SIMON_WALK_DOWNSTAIR_RIGHT		127
#define ID_ANI_SIMON_WALK_UPSTAIR_LEFT			126
#define ID_ANI_SIMON_WALK_DOWNSTAIR_RIGHT		127
#define ID_ANI_SIMON_WALK_DOWNSTAIR_LEFT		128
#define ID_ANI_SIMON_ATTACK_UPSTAIR_RIGHT		129
#define ID_ANI_SIMON_ATTACK_UPSTAIR_LEFT		130
#define ID_ANI_SIMON_ATTACK_DOWNSTAIR_RIGHT		131
#define ID_ANI_SIMON_ATTACK_DOWNSTAIR_LEFT		132
#define ID_ANI_SIMON_ATTACK_DOWNSTAIR_LEFT		132
#define ID_ANI_SIMON_INJURED_DEFLECT_RIGHT		133
#define ID_ANI_SIMON_INJURED_DEFLECT_LEFT		134
#define ID_ANI_SIMON_FLASH_RIGHT				135
#define ID_ANI_SIMON_FLASH_LEFT					136

//Simon bounding box
#define SIMON_BBOX_HEIGHT			30
#define SIMON_BBOX_WIDTH			15
#define SIMON_BBOX_SIT_WIDTH		15
#define SIMON_BBOX_SIT_HEIGHT		20

//Simon velocity
#define SIMON_WALKING_SPEED		0.1f
#define SIMON_JUMP_SPEED_Y		0.5f
#define SIMON_GRAVITY			0.002f

//Id animation of Whip
#define ID_ANI_WHIP_SHORT_RIGHT			0
#define ID_ANI_WHIP_SHORT_LEFT			1
#define ID_ANI_WHIP_NORMAL_RIGHT		2
#define ID_ANI_WHIP_NORMAL_LEFT			3
#define ID_ANI_WHIP_MAX_RIGHT			4	
#define ID_ANI_WHIP_MAX_LEFT			5

//Boungding Box of Whip
#define WHIP_BBOX_HEIGHT_SHORT			26
#define WHIP_BBOX_WIDTH_SHORT			8
#define WHIP_BBOX_HEIGHT_NORMAL			26
#define WHIP_BBOX_WIDTH_NORMAL			8
#define WHIP_BBOX_HEIGHT_LONG			44
#define WHIP_BBOX_WIDTH_LONG			8
