#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "stack.h"

void init(node **base, node **top, int x)
{
    *base = (node *)malloc(sizeof(node));
    (*base)->data = x;
    (*base)->next = NULL;
    *top = *base;
    return;
}

void push(node **top, int x)
{
    node *nn = (node *)malloc(sizeof(node));
    if (!nn)
    {
        printf("Stack is full\n");
        return;
    }
    nn->data = x;
    nn->next = *top;
    *top = nn;
    return; 
}

void display(node *base)
{
    while (base)
    {
        printf("%d ", base->data);
        base = base->next;
    }
    printf("\n");
    return;
}

int pop(node **top)
{
    node *temp;
    int x = INT_MIN;
    if (!(*top))
    {
        printf("Stack is full\n");
        return x;
    }
    else
    {
        temp = *top;
        *top = (*top)->next;
        x = temp->data;
        free(temp);
    }
    return x;
}
