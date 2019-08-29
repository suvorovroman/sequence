/**	\brief Базовые типы значений.
*/
enum value_type_tag
{
	CHARACTER_TYPE,	/**< Строка однобайтовых символов. */
};

/**	\brief	Описатель строкового типа.
*
*	Строковый тип содержит цепочки однобайтовых символов фиксированной длины.
*
*/
struct descriptor_of_CHARACTER_TYPE
{
	signed char size;	/**< Длина строки. */
};

struct value_type
{
	enum value_type_tag tag;
	union
	{
		struct descriptor_of_CHARACTER_TYPE d_CHARACTER_TYPE;
	} descriptor;
};