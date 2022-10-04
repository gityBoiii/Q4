#pragma once
#include <string>
using namespace std;

class State
{
public:
	State();
	State(int InID, string InStateName);

	int ID;
	string StateName;

};

