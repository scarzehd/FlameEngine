#include <iostream>

#include "../../FlameEngine-core/src/Game.h"

int main() {
	Game game = Game();
	game.setX(3);
	std::cout << game.getX() << std::endl;
	return 0;
}