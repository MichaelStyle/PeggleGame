#pragma once

#include "Engine.h"
#include "Component.h"
#include "Sprite.h"
#include "ResourceIDs.h"

#include "Background.h"
#include "Canon.h"
#include "GlowingBalls.h"
#include "Basket.h"

class Peggle :
	public Component
{
public:
	Peggle();
	~Peggle();

	void Start();
	void Update();
	void Draw();
	void Stop();

private : 
	Background* background;
	Canon* canon;
	GlowingBalls* glowingballs;
	Basket* basket;

	GlowingBalls** gbArray;

	D3DXVECTOR3 canonPos;
};

