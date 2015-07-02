#include "Canonball.h"
#include "Sprite.h"

Canonball::Canonball(float direction)
	:Sprite(Texture::CANONBALL)
	, posX(0.0f)
	, posY(0.0f)
	, speed(100.0f)
	, center(GetTextureInfos()->infos.Width / 2, GetTextureInfos()->infos.Height / 2, 0.0f)
	, canonDirection(direction)
{
	// Place in world
	SetPivot(&center);
	SetRotation(0.0f, 0.0f, 180 * (D3DX_PI / 180));
}

Canonball::~Canonball()
{
}

void Canonball ::Update()
{
	Movement();
}

// TODO - Add Direction of Canon to Ball's trajectory
void Canonball::Movement()
{
	float dt = gTimer->GetDeltaTime();

	D3DXVECTOR3 dir(cos(canonDirection), sin(canonDirection), 0.0f);
	posX += dir.x * speed * dt;
	posY += dir.y * speed * dt;
	SetPosition(posX, posY);
}