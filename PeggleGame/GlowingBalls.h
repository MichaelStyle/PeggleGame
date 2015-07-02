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

	// Helper Functions

private:

	D3DXVECTOR3 center;
	float posX;
	float posY;
};