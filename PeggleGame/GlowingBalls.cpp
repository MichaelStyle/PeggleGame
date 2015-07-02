#include "GlowingBalls.h"
#include "Sprite.h"

GlowingBalls::GlowingBalls()
	: Sprite(Texture::GLOWING_BALLS_SPRITESHEET)
	, posX(0.0f)
	, posY(0.0f)
	, center(GetTextureInfos()->infos.Width / 2, GetTextureInfos()->infos.Height / 2, 0.0f)
{
	SetPosition(posX, posY);
	SetPivot(&center);
	//SetRotation(0.0f, 0.0f, 180 * (D3DX_PI / 180));
}

GlowingBalls::~GlowingBalls()
{
}

void GlowingBalls::Update()
{

}