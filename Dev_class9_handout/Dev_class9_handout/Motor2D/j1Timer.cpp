// ----------------------------------------------------
// j1Timer.cpp
// Fast timer with milisecons precision
// ----------------------------------------------------

#include "j1Timer.h"
#include "SDL\include\SDL_timer.h"

// ---------------------------------------------
j1Timer::j1Timer()
{
	Start();
}

// ---------------------------------------------
void j1Timer::Start()
{
	// TODO 1: Fill Start(), Read(), ReadSec() methods
	// they are simple, one line each!
	Uint32 started_at = SDL_GetTicks();
}

// ---------------------------------------------
uint32 j1Timer::Read() const
{
	Uint32 second = SDL_GetTicks();

	Uint32 time = second - started_at;

	time /= 1000;



	return time;
}

// ---------------------------------------------
float j1Timer::ReadSec() const
{
	


	return 0.0f;
}