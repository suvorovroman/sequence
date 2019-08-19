#include "defs.h"

/**	Блок последовательности.
*/
struct block
{
	/** Слово состояния блока. */
	struct
	{
		unsigned int size : 4;	/**< Степень 2 для размера блока. */
		unsigned int offset_of_free_space : 16;	/**< Смещение от начала блока до первого свободного байта. */
	} descriptor;	
	struct block* next;	/**< Указатель на следующий блок. */
	void* data;	/**< Данные блока. */
};