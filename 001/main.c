#include <stdio.h>
#include "stack_api.h"

int main()
{
    stack_t *stk_db = NULL;

    stk_db = stack_create();
    if (NULL == stk_db)
        return 0;

    printf("Created stack at 0x%x\n", (unsigned int)stk_db);
    return 0;
}

