#include <stdio.h>
#include <stdlib.h>
#include "stack_api.h"

int stack_init(stack_t *ptr)
{
    if (NULL == ptr)
        return -1;

    ptr->head = NULL;
    ptr->tail = NULL;
    ptr->len = 0;

    return 0;
}

/* stack_create()
 * This function will create new stack database then return pointer to this database
 */
stack_t * stack_create(void)
{
    stack_t *ptr = NULL;
    ptr = malloc(sizeof(stack_t));
    if (NULL == ptr)
        return NULL;

    stack_init(ptr);
    return ptr;
}

/* stack_destroy()
 * This functoin will delete the stack database if this stack is empty
 */
int stack_destroy(stack_t *stk)
{
    if (NULL == stk || FALSE == is_stack_empty(stk))
        return FAILED;

    free(stk);
    return SUCCESS;
}

stack_node_t * stack_pop(stack_t *stk)
{
    if (NULL == stk || TRUE == is_stack_empty(stk))
        return NULL;

    stack_node_t *node = NULL;

    node = stk->tail;
    stk->tail = stk->tail->prev;
    stk->len --;

    return node;
}

int stack_push(stack_t *stk, stack_node_t *node)
{
    if (NULL == stk || NULL == node)
        return FAILED;

    node->prev = stk->tail;
    stk->tail = node;
    stk->len ++;

    return SUCCESS;
}

int is_stack_empty(stack_t *stk)
{
    if (0 == stk->len)
        return TRUE;
    return FALSE;
}
