#include <iostream>
#include "Printer.h"
#include "ReadyToPrint_State.h"

Printer::Printer() : CurrentState(new ReadyToPrint_State(this))
{

}
void Printer::step()
{
	CurrentState->step();
}