#include "Utils.h"
#include "App.h"
#include "Engine.h"
#include "Peggle.h"

int WINAPI _tWinMain(HINSTANCE hInstance, 
	HINSTANCE prevHInstance, 
	LPTSTR cmd, int showCmd)
{
	Engine* engine = new Engine(hInstance, "Peggle");
	gEngine = engine;

	engine->Init();

	Peggle* game = new Peggle();

	int assert = gEngine->Run();

	delete game;
	delete engine;

	return assert;
}
