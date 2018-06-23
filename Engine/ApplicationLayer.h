#pragma once
/*
Hardware and operating system dependant code.
Deals with:
Input(Mouse/Gamepad/Keyboard)
Clock
String handling
DLLs
Threading
Networking (TCP-UDP/IP)
Shutdown and initialization
Libraries and common data structures
Script Interpreter
Event Registry
*/

class ApplicationLayer
{
public:
	ApplicationLayer();
	
private: 
	void gameLoop();
	~ApplicationLayer();
};

