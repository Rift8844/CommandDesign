
#include "command.hpp"

#pragma once

enum BUTTON {
	BUTTON_X,
	BUTTON_Y,
	BUTTON_A,
	BUTTON_B
};


class InputHandler {
	Command* buttonX_;
	Command* buttonY_;
	Command* buttonA_;
	Command* buttonB_;

public:
	Command* handleInput();
};