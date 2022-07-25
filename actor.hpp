
#include <iostream>

#pragma once

class Actor {

public:
	void jump() { std::cout << "Jump" << std::endl; }
	void fireGun() { std::cout << "Pew pew!" << std::endl; }
	void swapWeapon() { std::cout << "Swapping weapon" << std::endl; }
	void lurch() { std::cout << "Lurching" << std::endl; }
};