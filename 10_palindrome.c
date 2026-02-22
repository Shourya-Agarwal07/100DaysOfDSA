//Read a string and check if it is a palindrome using two-pointer comparison.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int left, right, length;
    int is_palindrome;

    printf("Enter a string to check if it is palindrome: ");
    scanf("%s", str);

    length = strlen(str);

    left = 0;
    right = length - 1;

    is_palindrome = 1;
    while (left < right)
    {
        if (str[left] != str[right])
        {
            is_palindrome = 0;
            break;
        }
        left++;
        right--;
    }

    if (is_palindrome == 1)
    {
        printf("\"%s\" is a palindrome!\n", str);
    }
    else
    {
        printf("\"%s\" is NOT a palindrome!\n", str);
    }

    return 0;
}
