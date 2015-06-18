#include "Peggle.h"

Peggle::Peggle()
{
	// Assets Textures
	Textures->LoadTexture(Texture::BACKGROUND, BG_PATH);
	Textures->LoadTexture(Texture::GLOWING_BALLS_SPRITESHEET, GLOWINGBALLS_PATH);
	Textures->LoadTexture(Texture::CANONBALL, CANONBALL_PATH);
	Textures->LoadTexture(Texture::CANON, CANON_PATH);
	
	// Assets Instance
	background = new Background();
	canon = new Canon();
	canonball = new Canonball();
	glowingballs = new GlowingBalls();
}

Peggle::~Peggle()
{
	delete background;
	delete canon;
	delete canonball;
	delete glowingballs;
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