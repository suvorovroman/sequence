#include <stdio.h>
#include "sequence.h"
#include "memory.h"

void main(void)
{
	struct value_type t;
	struct sequence s;

	t.tag = CHARACTER_TYPE;
	t.descriptor.d_CHARACTER_TYPE.size = 10;
	initialize_sequence(&s, &t);
}