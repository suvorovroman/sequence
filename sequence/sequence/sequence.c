#include "sequence.h"

struct sequence* initialize_sequence(struct sequence* _s, const struct value_type* _t)
{
	_s->data = NULL;
	_s->type = *_t;
	return _s;
}