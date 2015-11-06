#ifndef __j1PERFTIMER_H__
#define __j1PERFTIMER_H__

#include "p2Defs.h"

class j1PerfTimer
{
public:

	// Constructor
	j1PerfTimer();

	uint64 Start();
	double ReadMs(uint) const;
	uint64 ReadTicks(uint) const;

private:
	//uint64	started_at;
	static uint64 frequency;

};

#endif //__j1PERFTIMER_H__