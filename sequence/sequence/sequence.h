#include "block.h"
#include "value_type.h"

struct sequence
{
	struct block* data;
	struct type_of_value type;
};

/**	\brief	���������������� ������������������ ��������.
*
*	�������������� ��������� ������������������ ����� ������ ��������������.
*
*	\param[in]	_s	��������� �� ���������������� ��������� ������������������.
*	\param[in]	_t	��� �������� ������������������.
*	\return	��������� �� ������������������ ������������������.
*/
struct sequence* initialize_sequence(struct sequence* _s, const struct value_type* _t);

void sequence_value(struct sequence* _s, struct value_type* _t, void* _v, jmp_buf _x);