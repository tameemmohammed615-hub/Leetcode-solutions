#include <stdio.h>

int main()
{
    int stack[100];
    int top = -1;
    int min;

    stack[++top] = -2;
    stack[++top] = 0;
    stack[++top] = -3;

    min = stack[0];

    for (int i = 1; i <= top; i++)
    {
        if (stack[i] < min)
            min = stack[i];
    }

    if (min == -3)
        printf("Test Passed\n");
    else
        printf("Test Failed\n");

    return 0;
}
