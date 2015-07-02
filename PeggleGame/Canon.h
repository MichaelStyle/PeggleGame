#pragma once

#define CANON_PATH "Images/canon.png"

#include "Sprite.h"
#include "ResourceIDs.h"
#include "Common.h"

#include "Canonball.h"

class Canon :
	public Sprite
{
public:
	Canon();
	~Canon();

	void Update();

	// Helper Functions
	void Controls();
	void Shoot();
	void MoveCanon();
	bool ManageCanonball();

private:

	D3DXVECTOR3 center;

	float rotation;
	float rotationSpeed;

	// Canonball
	Canonball* canonball;
	bool isShooting;
};