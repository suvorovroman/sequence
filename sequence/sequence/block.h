#include "defs.h"

struct block
{
	struct
	{
		unsigned int size : 4;
		unsigned int offset_of_free_space : 16;
	} descriptor;
	struct block* next;
	void* data;
};