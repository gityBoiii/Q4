#pragma once
#include <string>
using namespace std;

class Transition
{
public:
	Transition();
	Transition(int InCurrentState, string InCondition, int InNextState);
	int CurrentState;
	string Condition;
	int NextState;

};

