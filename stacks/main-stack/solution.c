#include <stdio.h>

int main()
{
    int stack[100];
    int top = -1;

    stack[++top] = -2;
    stack[++top] = 0;
    stack[++top] = -3;

    printf("Minimum = %d\n", stack[0]);

    return 0;
}
