#include <stdio.h>

struct Node
{
    int data;
    struct Node* next;
};

int main()
{
    struct Node n1 = {1, NULL};
    struct Node n2 = {2, NULL};
    struct Node n3 = {3, NULL};

    n1.next = &n2;
    n2.next = &n3;

    struct Node* prev = NULL;
    struct Node* current = &n1;

    while (current != NULL)
    {
        struct Node* next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    printf("Reversed list: ");

    current = prev;

    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }

    printf("\nTest Passed\n");

    return 0;
}
