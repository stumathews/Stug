#pragma once
/*
Contains the code that changes the state of game objects.
- Contains the GameObjectList
- Manages the world's state, changes to state will be sent to the Event manager as event triggers.
- Game rules such as physics
- Should be As OS agnostic as possible.
*/

class GameLogic
{
public:
	GameLogic();
	~GameLogic();
};

