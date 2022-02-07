#pragma once
#include "State.h"

class Idle_State : public State
{
public:
	Idle_State(Printer* owner);
	virtual void step() override;
private:
	int CountDown;
};

