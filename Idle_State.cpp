#include <iostream>
#include "Printer.h"
#include "Idle_State.h"
#include "ReadyToPrint_State.h"

Idle_State::Idle_State(Printer* owner) : State(owner), CountDown(5)
{
	cout << "Idle State Constructor... Countdown is " << CountDown << endl;
}

void Idle_State::step()
{
	cout << "Idle State... Countdown is " << (CountDown - 1) << endl;

	if (--CountDown <= 0)
		Owner->changeCurrentState<ReadyToPrint_State>();
}