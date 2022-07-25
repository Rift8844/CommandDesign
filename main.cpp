
#include "inputhandler.hpp"
#include "command.hpp"
#include "actor.hpp"

int main() {
	InputHandler handler;

	Actor player;

	Command* command = handler.handleInput();

	if (command) {
		command->execute(player);
	}

	return 0;
}