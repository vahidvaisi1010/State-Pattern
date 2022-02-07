#pragma once
class Printer;

class State
{
public:
	State(Printer* Owner);
	virtual ~State();
	virtual void step() = 0; //{}

protected:
	Printer* Owner;
};
