// ----------------------------------------------------
// j1PerfTimer.cpp
// Slow timer with microsecond precision
// ----------------------------------------------------

#include "j1PerfTimer.h"
#include "SDL\include\SDL_timer.h"
#include "p2Log.h"

uint64 j1PerfTimer::frequency = 0;

// ---------------------------------------------
j1PerfTimer::j1PerfTimer()
{
	// TODO 2: Fill Constructor, Start(),ReadMs() and ReadTicks() methods
	// they are simple, one line each!

	Start();
}

// ---------------------------------------------
uint64 j1PerfTimer::Start()
{
	return SDL_GetPerformanceCounter();
}

// ---------------------------------------------
double j1PerfTimer::ReadMs(uint startTime) const
{

	//LOG("Time value: %d", time);
	frequency = SDL_GetPerformanceFrequency();

	uint64 ticks = ReadTicks(startTime);

	float time = 1000.0f*((((float)ticks) / frequency));

	return (double)time;
}

// ---------------------------------------------
uint64 j1PerfTimer::ReadTicks(uint startTime) const
{
	uint currentMoment = SDL_GetPerformanceCounter();

	LOG("%d", frequency);

	Uint64 time = currentMoment - startTime;

	

	return time;
	//SDL_GetPerformanceCounter() - started_at;
}



