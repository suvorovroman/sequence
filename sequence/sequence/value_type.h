/**	\brief ������� ���� ��������.
*/
enum base_value_type
{
	CHARACTER_TYPE,	/**< ������ ������������ ��������. */
};

/**	\brief	��������� ���������� ����.
*
*	��������� ��� �������� ������� ������������ �������� ������������� �����.
*
*/
struct descriptor_of_CHARACTER_TYPE
{
	signed char size;	/**< ����� ������. */
};

struct type_of_value
{
	enum base_value_type tag;
};