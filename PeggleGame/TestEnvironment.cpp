//#include "SpriteApp.h"
//
//SpriteApp::SpriteApp(HINSTANCE hInstance, std::string winCaption)
//	: D3DApp(hInstance,
//	winCaption,
//	D3DDEVTYPE_HAL,
//	D3DCREATE_HARDWARE_VERTEXPROCESSING)
//	, mCenter(256.f, 128.f, 0.f)
//	, mPosition(0.f, 0.f, 0.f)
//{
//	HR(D3DXCreateSprite(gD3DDevice, &mSpriteBatch));
//	HR(D3DXCreateTextureFromFile(gD3DDevice, "safe_image.jpg", &mTexture));
//
//	OnResetDevice();
//}
//
//SpriteApp::~SpriteApp()
//{
//	ReleaseCOM(mTexture);
//	ReleaseCOM(mSpriteBatch);
//}
//
//void SpriteApp::OnLostDevice()
//{
//	mSpriteBatch->OnLostDevice();
//}
//
//void SpriteApp::OnResetDevice()
//{
//	mSpriteBatch->OnResetDevice();
//}
//
//void SpriteApp::Update()
//{
//	if (gDInput->keyDown(DIK_UP))
//	{
//		mPosition.y += 100.0f * gTimer->GetDeltaTime();
//	}
//}
//
//void SpriteApp::Draw()
//{
//	D3DXMATRIX S;
//	D3DXMatrixScaling(&S, 1.f, -1.f, 1.f);
//
//	HR(mSpriteBatch->Begin(
//		D3DXSPRITE_ALPHABLEND | D3DXSPRITE_OBJECTSPACE | D3DXSPRITE_DONOTMODIFY_RENDERSTATE));
//
//	HR(mSpriteBatch->SetTransform(&S));
//	HR(mSpriteBatch->Draw(mTexture, 0, &mCenter, &mPosition, D3DCOLOR_XRGB(255, 255, 255)));
//	HR(mSpriteBatch->Flush());
//
//	HR(mSpriteBatch->End());
//}


