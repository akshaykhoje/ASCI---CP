#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
    node *sBase = NULL;      //base of the stack
    node *top = NULL;        //pointer to top of the stack
    init(&sBase, &top, 5);
    push(&sBase, 10);
    push(&sBase, 20);
    push(&sBase, 30);
    display(sBase);
    printf("%d ", pop(&sBase));
    printf("%d ", pop(&sBase));
    return 0;
}
