#pragma once

//Windown
#define WINDOW_CLASS_NAME L"SampleWindow"
#define MAIN_WINDOW_TITLE L"Castle Vania"

#define BACKGROUND_COLOR D3DCOLOR_XRGB(0, 0, 0)
#define SCREEN_WIDTH			272
#define SCREEN_HEIGHT			264
#define CAM_HEIGHT				192

#define MAX_FRAME_RATE			120

//ID object
#define ID_SIMON				0
#define ID_WHIP					1
#define ID_BOOMERANG			2

#define ID_WALL					10
#define ID_PORTAL				11
#define ID_TORCH				12
#define ID_HIDDEN_OBJECTS		13
#define ID_CANDLE				14
#define ID_STAIR				15
#define ID_MOVING_BRICK			16

//ID Items
#define ID_SMALL_HEART			100
#define ID_BIG_HEART			101
#define ID_WHIP_UPGRADE			102
#define ID_DAGGER				103
#define ID_RED_MONEYBAG			104
#define ID_BLUE_MONEYBAG 		105
#define ID_YELLOW_MONEYBAG 		106
#define ID_BIG_MONEYBAG			107
#define ID_ITEM_BOOMERANG		108

//ID Enemy
#define ID_BAT					30
#define ID_BLACK_KNIGHT			31
#define ID_GHOST				32
#define ID_FLEAMAN				33

//ID textuters
#define ID_TEX_SIMON			0
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
#define SIMON_BBOX_SIT_HEIGHT		20
#define SIMON_BBOX_SIT_WIDTH		15

//Id animation of Whip
#define ID_ANI_WHIP_SHORT_RIGHT			111
#define ID_ANI_WHIP_SHORT_LEFT			112
#define ID_ANI_WHIP_NORMAL_RIGHT		113
#define ID_ANI_WHIP_NORMAL_LEFT			114
#define ID_ANI_WHIP_LONG_RIGHT			115	
#define ID_ANI_WHIP_LONG_LEFT			116

//Boungding Box of Whip
#define WHIP_BBOX_HEIGHT_SHORT			25
#define WHIP_BBOX_WIDTH_SHORT			8
#define WHIP_BBOX_HEIGHT_NORMAL			28
#define WHIP_BBOX_WIDTH_NORMAL			8
#define WHIP_BBOX_HEIGHT_LONG			44
#define WHIP_BBOX_WIDTH_LONG			8

//Id animation of boomerang
#define ID_ANI_BOOMERANG_RIGHT		301
#define ID_ANI_BOOMERANG_LEFT		302

//Id animation of static objects
#define ID_ANI_TORCH			200
#define ID_ANI_CANDLE			201
#define ID_ANI_MOVING_BRICK		202

//Id animation of hit effect
#define ID_ANI_HIT_EFFECT		500
#define HIT_EFFECT_TIME			450

//Id state item destroyed
#define STATE_DESTROYED			99

//Id animation of items
#define ID_ANI_BIG_HEART			400
#define ID_ANI_WHIP_UPGRADE			401
#define ID_ANI_DAGGER_RIGHT			402
#define ID_ANI_DAGGER_LEFT			403
#define ID_ANI_BIG_MONEYBAG			404
#define ID_ANI_ITEM_BOOMERANG		405
#define ID_ANI_SMALL_HEART			406
#define ID_ANI_RED_MONEYBAG			407
#define ID_ANI_BLUE_MONEYBAG		408
#define ID_ANI_YELLOW_MONEYBAG		409
#define ID_ANI_RED_MONEYBAG_SCORE		410
#define ID_ANI_BLUE_MONEYBAG_SCORE		411
#define ID_ANI_YELLOW_MONEYBAG_SCORE	412
#define ID_ANI_BIG_MONEYBAG_SCORE		413

//Id nx of item
#define ITEM_RIGHT		0
#define ITEM_LEFT		1


//ID animation of enemy
#define ID_ANI_BAT_IDLE				501
#define ID_ANI_BAT_FLY				502

#define ID_ANI_BLACK_KNIGHT_RIGHT	503
#define ID_ANI_BLACK_KNIGHT_LEFT	504

#define ID_ANI_GHOST_FLY_RIGHT		505
#define ID_ANI_GHOST_FLY_LEFT		506
#define ID_ANI_GHOST_HIDDEN			507

#define ID_ANI_FLEAMAN_IDLE_RIGHT	508
#define ID_ANI_FLEAMAN_IDLE_LEFT	509
#define ID_ANI_FLEAMAN_PREATTACK	510