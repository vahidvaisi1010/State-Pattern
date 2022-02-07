#pragma once
#include <iostream>
using namespace std;

class State;

class Printer
{
public:
	Printer();
	void step();

	template<typename T>
	void changeCurrentState();
private:
	State* CurrentState;
};

template<typename T>
void Printer::changeCurrentState()
{
	cout << "change state called" << endl;
	delete CurrentState;
	CurrentState = new T(this);
}

