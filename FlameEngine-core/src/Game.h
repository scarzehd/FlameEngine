#pragma once

#include <SDL/SDL.h>
#include <iostream>

class Game {
public:
	bool init();
	void update();
	void draw();

	SDL_Window* window;
	SDL_Renderer* renderer;

private:

};