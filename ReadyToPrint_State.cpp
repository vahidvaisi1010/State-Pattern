#include <iostream>
#include "Printer.h"
#include "Idle_State.h"
#include "ReadyToPrint_State.h"

ReadyToPrint_State::ReadyToPrint_State(Printer* owner) : State(owner), CountDown(10) 
{
	cout << "ReadyToPrint Constructor... Countdown is " << CountDown << endl;
}

void ReadyToPrint_State::step()
{
	cout << "ReadyToPrint State... Countdown is " << (CountDown - 1) << endl;

	if (--CountDown <= 0)
		Owner->changeCurrentState<Idle_State>();
}