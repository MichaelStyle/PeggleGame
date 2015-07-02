#pragma once

#define CANONBALL_PATH "Images/canonball.png"

#include "Sprite.h"
#include "ResourceIDs.h"
#include "Common.h"

class Canonball :
	public Sprite
{
public:
	Canonball(float direction);
	~Canonball();

	void Update();

	// Helper Functions
	void Movement();

	float posX;
	float posY;
	float canonDirection;

private:

	D3DXVECTOR3 center;
	float speed;

};
