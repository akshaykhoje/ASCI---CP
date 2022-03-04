#include <stdio.h>
#include <stdlib.h>
#include "ll.h"
#include <limits.h>

void init(node **p, int x)
{
    *p = (node *)malloc(sizeof(node));
    (*p)->data = x;
    (*p)->next = NULL;
    return;
}

void append(node **p, int x)
{
    node *temp, *nn;
    temp = *p;
    nn = (node *)malloc(sizeof(node));
    nn->data = x;
    nn->next = NULL;
    while (temp->next)
        temp = temp->next;
    temp->next = nn;
    return;
}

void display(node *p)
{
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
    return;
}

int count(node *p)
{
    int i = 0;
    while (p)
    {
        p = p->next;
        i++;
    }
    return i;
}

int delete (node **p, int index)
{
    int val = INT_MIN;
    node *temp = *p;
    node *back = *p;
    if (index < 0 || index > count(*p))
    {
        printf("Invalid index\n");
        return val;
    }
    else
    {
        if (index == 1)
        {
            val = (*p)->data;
            *p = temp->next;
            temp->next = NULL;
            free(temp);
        }
        else
        {
            int i = 1;
            while (i < index)
            {
                back = temp;
                temp = temp->next;
                i++;
            }
            val = temp->data;
            back->next = temp->next; // connected the link from the *back to the node next to that of temp
            temp->next = NULL;
            free(temp);
        }
    }
    return val;
}

int maxElement(node *p)
{
    int max = 0;
    // node *temp = p;
    while (p)
    {
        if (p->data > max)
            max = p->data;
        p = p->next;
    }
    return max;
}

int *search(node *p, int key, int *indices)
{
    int appearance = 0;
    node *temp = p;
    while (temp)
    {
        if (temp->data == key)
            appearance++;
        temp = temp->next;
    }

    // int *indices = (int *)malloc(sizeof(int) * appearance);
    if (appearance >= 1)
    {
        int *indices2 = (int *)realloc(indices, sizeof(int) * appearance);
        node *temp2 = p;
        int j = 1;
        int index = 1;
        indices2[0] = appearance;
        while (temp2)
        {
            if (temp2->data == key)
            {
                indices2[j] = index;
                j++;
            }
            index++;
            temp2 = temp2->next;
        }
        return indices2;
    }
    else{
        printf("Key not found!\n");
        exit(0);
    }
}