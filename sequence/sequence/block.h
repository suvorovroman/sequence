#include "defs.h"

/**\brief Слово состояния блока. 
*	
*	Упакованные в слово атрибуты блока (текущий размер, степень заполнения и т.п.).
*/
struct block_state
{
	/**\brief Размер области значений.
	*
	*	Хранится степень 2 размера из диапазона [0, 15], т.е. размер
	*	области значений может быть от 1 (2^0) до 32768(2^15).
	*/
	unsigned int exponent_of_size : 4;

	/**	\brief	Смещение первого бита свободной части области данных.
	*
	*	Смещение может быть от 0 (область даных свободна полностью) до 262144 (32768*8 = 2^18).
	*	В последнем случае она пуста.
	*/
	unsigned int free_space_offset : 19;
};

/**	Блок последовательности.
*
*	Блок памяти, который единовременно отводится для группы значений последовательности. Размер памяти, отводимый блоку
*	кратен двум. При создании блока он имеет минимальный размер, который нужен для хранения одного значения. По мере
*	добавления значений в блок его размер увеличивается вдвое пока не достигнет максимального размера в 2^15. После
*	чего создается новый блок. Блоки последовательности объединяются в цепочку так, что новые блоки добавляются в начало 
*	цепочки.
*/
struct block
{
	/**\brief Слово состоаяния блока. */
	struct block_state state;

	/**	\brief	Указатель на предыдущий блок цепочки.
	*
	*	Блоки образуют цепочку, в начале которой находится последний по времени блок.
	*	Новые значения всегда добавляются в начало цепочки.
	*/
	struct block* previous;
	/**	\brief	Указатель на область значений.
	*
	*	Область памяти, где храняться значения последовательности.
	*/
	void* value;	
};

/**\brief Создание нового начального блока цепочки.
*
*	Создает новый блок с пустой областью значений, которая имеет минимальный кратный 2 размер, 
*	достаточный для хранения одного значения размера _s бит. Созданный блок становится новой головой цепочки _c.
*	\param[in]	_c	Голова цепочки блоков, куда добавляется новый блок.
*	\param[in]	_s	Минимальный размер области значений в битах.
*	\param[in]	_x	Метка перехода, когда невозможно выделить память для нового блока.
*	\return	Указатель на новый головной блок цепочки.
*/
struct block* chain_block(struct block* _с, unsigned int _s, exception _x);
