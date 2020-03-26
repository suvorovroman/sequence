#include <setjmp.h>

/**\brief Метка перехода при исключительной ситуации. */
typedef jmp_buf xlabel;

/**\brief Идентификатор исключительной ситуации. */
enum xid
{
  XID_SUCCESS     = 0,
};
