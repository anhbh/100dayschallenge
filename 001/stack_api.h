#ifndef _STACK_API_H_
#define _STACK_API_H_

typedef struct stack
{
    struct stack_node *head;
    struct stack_node *tail;
    int len;
} stack_t;

typedef struct stack_node
{
    char *data;
    struct stack_node *next;
    struct stack_node *prev;
} stack_node_t;

#define TRUE  1
#define FALSE 0

#define SUCCESS 0
#define FAILED  -1

int stack_init(stack_t *ptr);

stack_t * stack_create(void);

int stack_destroy(stack_t *stk);

stack_node_t * stack_pop(stack_t *stk);

int stack_push(stack_t *stk, stack_node_t *node);

int is_stack_empty(stack_t *stk);
#endif /*_STACK_API_H_*/
