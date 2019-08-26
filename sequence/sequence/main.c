#include <stdio.h>
#include "sequence.h"
#include "memory.h"

void main(void)
{
	jmp_buf x;
	size_t s;
	struct memory m;

	initialize_memory(&m);

	if (setjmp(x))
	{
		printf("failed to allocated memore of size %zd\n", s);
		printf("allocated totally %zd\n", m.allocated);
		return;
	}

	for (s = 1;; s <<= 1)
		allocate_memory(&m, s, x);

}