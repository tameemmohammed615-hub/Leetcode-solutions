#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[] = "A man, a plan, a canal: Panama";
    int left = 0;
    int right = strlen(s) - 1;
    int valid = 1;

    while (left < right)
    {
        while (left < right && !isalnum(s[left]))
            left++;

        while (left < right && !isalnum(s[right]))
            right--;

        if (tolower(s[left]) != tolower(s[right]))
        {
            valid = 0;
            break;
        }

        left++;
        right--;
    }

    if (valid)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
