#include "Peggle.h"

Peggle::Peggle()
{
	// Assets Textures
	Textures->LoadTexture(Texture::BACKGROUND, BG_PATH);
	Textures->LoadTexture(Texture::GLOWING_BALLS_SPRITESHEET, GLOWINGBALLS_PATH);
	Textures->LoadTexture(Texture::CANON, CANON_PATH);
	Textures->LoadTexture(Texture::BASKET, BASKET_PATH);

	// Assets Instance
	background = new Background();
	canon = new Canon();
	basket = new Basket();
	gbArray = new GlowingBalls *[];
	
	int posX = -250;
	int posY = -130;
	for (int i = 0; i < 8; i++)
	{		
		for (int j = 0; j < 5; j++)
		{
			glowingballs = new GlowingBalls();
			gbArray[i] = glowingballs;
			gbArray[i]->SetPosition(posX, posY);

			posY += 65;
		}
		posX += 70;
		posY = -130;
	}
}

Peggle::~Peggle()
{
	delete background;
	//delete canon;
	//delete glowingballs;
	//delete basket;
}

void Peggle::Start()
{

}

void Peggle::Update()
{

}

void Peggle::Draw()
{

}

void Peggle::Stop()
{

}