#pragma once

#define BASKET_PATH "Images/basket.png"

#include "Sprite.h"
#include "ResourceIDs.h"
#include "Common.h"

class Basket :
	public Sprite
{
public:
	Basket();
	~Basket();

	void Update();

	// Helper Functions
	void Movement();

private:

	D3DXVECTOR3 basketPosition;
	D3DXVECTOR3 center;
	float posX;
	float posY;
	float speed;

	float dir;

};