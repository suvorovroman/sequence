#include "defs.h"

/**	���� ������������������.
*/
struct block
{
	/** ����� ��������� �����. */
	struct
	{
		/** \brief	������ ������� ��������.
		*
		*	�������� ������ ������� 2 ������� �� ��������� [0, 15], �.�. ������
		*	������� �������� ����� ���� �� 1 (2^0) �� 32768(2^15).
		*/
		unsigned int size : 4;	
		/**	\brief	������ ��������� ������ � ������� ��������.
		*
		*	�������� ������� ���������� ����� �� ������ ������� ��������.
		*/
		unsigned int offset_of_free_space : 16;	
	} descriptor;	
	/**	\brief	��������� �� ���������� ���� �������.
	*
	*	����� �������� �������, � ������ ������� ��������� ��������� �� ������� ����.
	*	����� �������� ������ ����������� � ������ �������.
	*/
	struct block* previous;
	/**	\brief	��������� �� ������� ��������.
	*
	*	������� ������, ��� ��������� �������� ������������������.
	*/
	void* value;	
};