/**	\brief Базовые типы значений.
*/
enum base_value_type
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

struct type_of_value
{
	enum base_value_type tag;
};