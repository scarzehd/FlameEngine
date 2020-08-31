#include "Game.h"

int main() {
	Game game = Game();
	if (!game.init()) {
		return 1;
	}
	return 0;
}