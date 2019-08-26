#include "memory.h"
#include <stdlib.h>

void initialize_memory(struct memory* _m)
{
	_m->allocated = 0;
}

void* allocate_memory(struct memory* _m, size_t _s, jmp_buf _x)
{
	void* p;
	
	p = malloc(_s);
	if (_s && p == NULL)
		longjmp(_x, 1);
	_m->allocated += _s;

	return p;
}
