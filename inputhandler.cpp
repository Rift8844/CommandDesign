#include "inputhandler.hpp"
#include "command.hpp"

bool isPressed(BUTTON btn);

Command* InputHandler::handleInput() {
	if 		(isPressed(BUTTON_X)) return buttonX_;
	else if (isPressed(BUTTON_Y)) return buttonY_;
	else if (isPressed(BUTTON_A)) return buttonA_;
	else if (isPressed(BUTTON_B)) return buttonB_;
	else 						  return nullptr;
}



//just some hardcoded values for now
bool isPressed(BUTTON btn) {
	switch (btn) {

		case (BUTTON_X):
			return true;

		case (BUTTON_Y):
			return false;

		case (BUTTON_A):
			return false;

		case (BUTTON_B):
			return true;

		default:
			return false;
	}
}