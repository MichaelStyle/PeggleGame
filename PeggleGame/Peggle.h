#pragma once

#include "Engine.h"
#include "Component.h"
#include "Sprite.h"
#include "ResourceIDs.h"

#include "Background.h"
#include "Canon.h"
#include "Canonball.h"
#include "GlowingBalls.h"

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
	Canonball* canonball;
	GlowingBalls* glowingballs;
};

