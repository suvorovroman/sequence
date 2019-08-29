#include "block.h"
#include <setjmp.h>

struct sequence
{
	struct block* data;
	struct value_type type;
};

/**	\brief	Инициализировать последовательность значений.
*
*	Инициализцрует структуру последовательности перед первым использованием.
*
*	\param[in]	_s	Указатель на инициализируемую структуру последовательности.
*	\param[in]	_t	Тип значений последовательности.
*	\return	Указатель на инициализированную последовательность.
*/
struct sequence* initialize_sequence(struct sequence* _s, const struct value_type* _t);

void sequence_value(struct sequence* _s, struct value_type* _t, void* _v, jmp_buf _x);