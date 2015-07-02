#include "Canon.h"
#include "Sprite.h"
#include <math.h>

Canon::Canon()
	: Sprite(Texture::CANON, 0.f, 240.f)
	, rotation(-90.0f * D3DX_PI/180)
	, rotationSpeed(3.0f)
	, center(0.f, GetTextureInfos()->infos.Height/2, 0.0f)
	, isShooting(false)
{
	// Load Canonball Texture
	Textures->LoadTexture(Texture::CANONBALL, CANONBALL_PATH);

	// Place in world
	SetPivot(&center);
	SetRotation(0.0f, 0.0f, -D3DX_PI/2);
}

Canon::~Canon()
{
	delete canonball;
}

void Canon::Update()
{
	Controls();

	ManageCanonball();
}

void Canon::Controls()
{
	MoveCanon();

	Shoot();
}

void Canon::Shoot()
{
	if (gDInput->keyDown(DIK_DOWN))
	{
		if (!isShooting)
		{
			canonball = new Canonball(rotation);
			canonball->posX = GetPosition().x;
			canonball->posY = GetPosition().y;

			isShooting = true;
		}
	}
}

void Canon::MoveCanon()
{
	float dt = gTimer->GetDeltaTime();

	// Rotate Left
	if (gDInput->keyDown(DIK_LEFT))
	{
		rotation -= rotationSpeed * dt;
		SetRotation(0.0f, 0.0f, rotation);
	}

	// Rotate Right
	if (gDInput->keyDown(DIK_RIGHT))
	{
		rotation += rotationSpeed * dt;
		SetRotation(0.0f, 0.0f, rotation);
	}

	std::cout << rotation * 180/D3DX_PI << std::endl;
}

bool Canon::ManageCanonball()
{
	//if (canonball != nullptr)
	//{
	//
	//}

	// Destroy if out of bounds
	return false;
}