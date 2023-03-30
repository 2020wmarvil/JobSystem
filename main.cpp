#include "Jobby.h"

#include <iostream>

int main()
{
	Jobby::Initialize();

	Jobby::Execute([] { /*do stuff 1*/ });
	Jobby::Execute([] { /*do stuff 2*/ });
	Jobby::Wait();

	while (Jobby::IsBusy())
	{
		// do stuff
	}
}