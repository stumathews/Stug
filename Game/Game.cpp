// Game.cpp : Defines the entry point for the application.

#include "Game.h"
#include "../Engine/Engine.h"
#include "../Engine/stdafx.h"

int APIENTRY wWinMain(HINSTANCE hInstance,
                      HINSTANCE hPrevInstance,
                      LPWSTR    lpCmdLine,
                      int       nCmdShow)
{
    // Game entry point ie game starts executing from here on...	
	return Engine(hInstance, hPrevInstance, lpCmdLine, nCmdShow);
}
