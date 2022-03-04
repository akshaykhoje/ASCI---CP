#include <stdio.h>
#include <stdlib.h>
#include "ll.h"
#include <limits.h>

int main()
{
    node *head;
    init(&head, 1120);
    append(&head, 11);
    append(&head, 20);
    append(&head, 30);
    append(&head, 40);
    append(&head, 11);
    append(&head, 44);
    append(&head, -654);
    append(&head, 44);
    display(head);
    printf("count : %d\n", count(head));
    // delete(&head, 2);
    // delete(&head, 1);
    // printf("count : %d\n", count(head));
    // display(head);
    // delete(&head, 3);
    // display(head);
    // printf("Max element : %d\n", maxElement(head));

    int *indices = (int *)malloc(sizeof(int));
    int key;
    printf("Enter the key to search in the linked list: ");
    scanf("%d", &key);
    int *ptr = search(head, key, indices);
    int len = ptr[0];
    // if (len > 1)
    // {
        printf("The key %d is found at index positions : \n", key);
        for (int i = 1; i <= len; i++)
            printf("%d ", ptr[i]);
    
   
    return 0;
}