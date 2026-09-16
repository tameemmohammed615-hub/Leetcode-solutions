#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "anagram";
    char t[] = "nagaram";
    int count[26] = {0};

    for (int i = 0; s[i] != '\0'; i++)
        count[s[i] - 'a']++;

    for (int i = 0; t[i] != '\0'; i++)
        count[t[i] - 'a']--;

    int valid = 1;

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            valid = 0;
            break;
        }
    }

    if (valid)
        printf("Test Passed\n");
    else
        printf("Test Failed\n");

    return 0;
}
