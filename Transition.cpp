#include "Transition.h"

Transition::Transition()
{
}

Transition::Transition(int InCurrentState, string InCondition, int InNextState)
{
	CurrentState = InCurrentState;
	Condition = InCondition;
	NextState = InNextState;

}
