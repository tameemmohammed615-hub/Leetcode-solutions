#include <stdio.h>

int main()
{
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int n = 4;

    int found = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                printf("Test Passed\n");
                printf("Indexes: %d %d\n", i, j);
                found = 1;
            }
        }
    }

    if (!found)
    {
        printf("Test Failed\n");
    }

    return 0;
}
