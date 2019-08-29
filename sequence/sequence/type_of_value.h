/**	\brief ������� ���� ��������.
*/
enum value_type_tag
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

struct value_type
{
	enum value_type_tag tag;
	union
	{
		struct descriptor_of_CHARACTER_TYPE d_CHARACTER_TYPE;
	} descriptor;
};