#include "Background.h"
#include "Sprite.h"

Background::Background()
	:Sprite(Texture::BACKGROUND)
	, posX(0)
	, posY(0)
	, center(GetTextureInfos()->infos.Width / 2, GetTextureInfos()->infos.Height / 2, 0.0f)
{
	// Place in world
	SetPosition(posX, posY);
	SetPivot(&center);
	SetRotation(0.0f, 0.0f, 180 * (D3DX_PI / 180));
}

Background::~Background()
{
}

void Background::Update()
{

}
