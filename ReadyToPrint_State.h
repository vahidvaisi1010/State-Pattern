#pragma once

#include "State.h"

class ReadyToPrint_State : public State
{
public:
	ReadyToPrint_State(Printer* owner);
	virtual void step() override;

private:
	int CountDown;

};


