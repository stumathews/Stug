#pragma once
#include "Engine.h"
#include <memory>
using namespace std;

INT WINAPI Engine(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nCmdShow)
{
	shared_ptr<int> p(new int(5));
	weak_ptr<int> w = p;
	std::cout << "Hello from the engine" << std::endl;
	return 0;
}

