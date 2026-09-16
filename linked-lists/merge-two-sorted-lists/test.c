#include <stdio.h>

struct Node
{
    int data;
    struct Node* next;
};

int main()
{
    struct Node a1 = {1, NULL};
    struct Node a2 = {2, NULL};
    struct Node a3 = {4, NULL};

    struct Node b1 = {1, NULL};
    struct Node b2 = {3, NULL};
    struct Node b3 = {4, NULL};

    a1.next = &a2;
    a2.next = &a3;

    b1.next = &b2;
    b2.next = &b3;

    struct Node dummy;
    struct Node* current = &dummy;

    dummy.next = NULL;

    struct Node* list1 = &a1;
    struct Node* list2 = &b1;

    while (list1 != NULL && list2 != NULL)
    {
        if (list1->data <= list2->data)
        {
            current->next = list1;
            list1 = list1->next;
        }
        else
        {
            current->next = list2;
            list2 = list2->next;
        }

        current = current->next;
    }

    if (list1 != NULL)
        current->next = list1;
    else
        current->next = list2;

    printf("Merged list: ");

    current = dummy.next;

    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }

    printf("\nTest Passed\n");

    return 0;
}
