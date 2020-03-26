#include "block.h"

struct block* chain_block(struct block *_c, unsigned int _s, xlabel _x)
{
  struct block* b;
  
  b = memory_allocate(sizeof(struct block), _x);
  b->previous = _c;
  b->state.exponent_of_size = evaluate_inital_size(_s);
  b->state.free_space_offset = 0;
  return b;
}
