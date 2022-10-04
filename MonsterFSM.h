#pragma once
#include <vector>
#include "State.h"
#include "Transition.h"
class MonsterFSM
{
public:
	MonsterFSM();
	vector<State> StateList;
	vector<Transition> TransitionList;

	int GEtNextState(int CurrentState, string Condition);
	string GEtstateName(int StateIndex);
};

