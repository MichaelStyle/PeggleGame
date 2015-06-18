#pragma once

#define BG_PATH "Images/background.png"

#include "Sprite.h"
#include "ResourceIDs.h"
#include "Common.h"

class Background :
	public Sprite
{
public:
	Background();
	~Background();

	void Update();

private:


};