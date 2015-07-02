#include "Basket.h"
#include "Sprite.h"

Basket::Basket()
	:Sprite(Texture::BASKET)
	, posX(0.0f)
	, posY(-230.0f)
	, speed(100.0f)
	, center(GetTextureInfos()->infos.Width / 2, GetTextureInfos()->infos.Height / 2, 0.0f)
	, dir(1.0f)
{
	// Place in world
	SetPosition(posX, posY);
	SetPivot(&center);
	SetRotation(0.0f, 0.0f, 180*(D3DX_PI / 180));
}

Basket::~Basket()
{
}

void Basket::Update()
{
	Movement();
}

void Basket::Movement()
{
	basketPosition = GetPosition();
	
	// Move the basket depending on its direction and speed
	posX += dir * speed * gTimer->GetDeltaTime();
	SetPosition(posX, posY);

	// At left limit, go right
	if (basketPosition.x < -200.0f)
	{
		dir = 1.0f;
	}

	// At right limit, go left
	if (basketPosition.x > 580.0f)
	{
		dir = -1.0f;
	}
}
