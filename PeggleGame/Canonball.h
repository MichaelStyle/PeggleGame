#pragma once

#define CANONBALL_PATH "Images/canonball.png"

#include "Sprite.h"
#include "ResourceIDs.h"
#include "Common.h"

class Canonball :
	public Sprite
{
public:
	Canonball();
	~Canonball();

	void Update();

private:


};
