#pragma once

#include <functional>

namespace Jobby
{
	struct JobDispatchArgs
	{
		uint32_t jobIndex;
		uint32_t groupIndex;
	};

	void Initialize();
	void Execute(); // Adds a function to the job queue
	void Dispatch(); // Cuts a function into multiple jobs that are added to the job queue
	void ParallelFor();
}
