#include "block.h"
#include "memory.h"

static unsigned int evaluate_size_exponent(unsigned int _s)
{
  unsigned int e;
  
  for(e = 0; _s; _s >>= 1, e++);
  return e;
}

struct block* chain_block(struct block *_c, unsigned int _s, xlabel _x)
{
  struct block* b;
  
  b = memory_allocate(sizeof(struct block), _x);
  b->previous = _c;
  b->state.exponent_of_size = evaluate_size_exponent(_s >> 3 + (_s&0x7 ? 1:0));
  b->state.free_space_offset = 0;
  b->value = memory_allocate(2 << b->state.exponent_of_size, _x);
  return b;
}
