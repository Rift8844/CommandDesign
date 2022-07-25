

#include "actor.hpp"

#pragma once

class Command {
public:
	virtual ~Command() {};
	virtual void execute(Actor& actor) = 0;
};


class JumpCommand : public Command {
public:
	virtual void execute(Actor& actor) { actor.jump(); }
};

class FireCommand : public Command {
public:
	virtual void execute(Actor& actor) { actor.fireGun(); }
};

class SwapWeapon : public Command {
public:
	virtual void execute(Actor& actor) { actor.swapWeapon(); }
};

class Lurch : public Command {
public:
	virtual void execute(Actor& actor) { actor.lurch(); }
};