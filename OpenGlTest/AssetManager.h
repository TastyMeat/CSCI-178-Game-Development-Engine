#pragma once
#include <memory>
#include "SealEngine.h"
using namespace SealEngine;

class AssetManager {
public:
	static const Texture2D Hector_Run;
	static const AnimationClip Hector_Idle;
	static const AnimationClip Hector_IdleN;
	static const AnimatorController Hector_Controller;
	static const GameObject HectorObject;

	static const Texture2D XwingTexture;
	static const AnimationClip Xwing_Idle;
	static const AnimationClip Xwing_Left;
	static const AnimationClip Xwing_Right;
	static const AnimatorController Xwing_Controller;
	static const GameObject XwingObject;

	static const Texture2D Projectile_Blue_Texture;
	static const AnimationClip Projectile_Blue_Idle;
	static const AnimatorController Projectile_Blue_Controller;
	static const GameObject ProjectileObject_Blue;

	static const Texture2D GreenSlime;
	static const AnimationClip GreenSlime_Idle;
	static const AnimatorController GreenSlime_Controller;

	//Sensei
	static const Texture2D SenseiTexture;
	static const AnimationClip Sensei_Idle;
	static const AnimationClip Sensei_Walking;
	static const AnimationClip Sensei_Hadoken;
	static const AnimationClip Sensei_CallsReinforcements;
	static const AnimationClip Sensei_CallingReinforcements;
	static const AnimationClip Sensei_Teleport;
	static const AnimatorController Sensei_Controller;
	static const GameObject SenseiObject;

	//Boss
	static const Texture2D BossTexture;
	static const AnimationClip Boss_Charging;
	static const AnimationClip Boss_Charged;
	static const AnimationClip Boss_Close;
	static const AnimationClip Boss_Chomp_Indicator;
	static const AnimationClip Boss_Bomb_Indicator;
	static const AnimationClip Boss_Open;
	static const AnimationClip Boss_Chomp_Attack;
	static const AnimationClip Boss_Bomb_Attack;
	static const AnimatorController Boss_Controller;
	static const GameObject BossObject;

	//Big TikeMyson
	static const Texture2D BigTikeMyson;
	static const AnimationClip BigTikeMyson_Idle;
	static const AnimationClip BigTikeMyson_Walk;
	static const AnimationClip BigTikeMyson_Jump;
	static const AnimationClip BigTikeMyson_Punch;
	static const AnimatorController BigTikeMyson_Controller;
	static const GameObject BigTikeMysonObject;

	//Mini TikeMyson
	static const Texture2D MiniTikeMyson;
	static const AnimationClip MiniTikeMyson_Idle;
	static const AnimationClip MiniTikeMyson_Walk;
	static const AnimationClip MiniTikeMyson_Jump;
	static const AnimationClip MiniTikeMyson_Punch;
	static const AnimatorController MiniTikeMyson_Controller;
	static const GameObject MiniTikeMysonObject;

	//Obstacle
	static const Texture2D ObstacleTexture;
	static const AnimationClip Obstacle_Idle;
	static const AnimatorController Obstacle_Controller;
	static const GameObject ObstacleObject;
	
	//Boss
	static const Texture2D BossTexture;

	//Spawner
	static const GameObject ObstacleSpawnerObject;

	//Misc
	static const Texture2D Googleplex;

	static const Texture2D SpaceBackground;
	static const Texture2D GalaxyBackground;

	static const Texture2D Font;

	static const Texture2D GameTitle;
	static const Texture2D MenuOptions;
	static const Texture2D PauseScreen;
	static const Texture2D PauseMessage;

	static const Texture2D SkyBackground;
	static const Texture2D MountainBackground;
};
