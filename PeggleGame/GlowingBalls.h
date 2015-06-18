#pragma once

#define GLOWINGBALLS_PATH "Images/glowingballs.png"

#include "Sprite.h"
#include "ResourceIDs.h"
#include "Common.h"

class GlowingBalls :
	public Sprite
{
public:
	GlowingBalls();
	~GlowingBalls();

	void Update();

private:


};