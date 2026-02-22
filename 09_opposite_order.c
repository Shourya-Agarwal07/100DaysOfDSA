//Problem: A secret system stores code names in forward order. To display them in mirror format, you must transform the given code name so that its characters appear in the opposite order.

#include <stdio.h>
#include <string.h>

int main()
{
    char code[100];
    int start, end, length;
    char temp;

    printf("Enter a code name: ");
    scanf("%s", code);

    length = strlen(code);

    start = 0;
    end = length - 1;

    while (start < end)
    {
        temp = code[start];
        code[start] = code[end];
        code[end] = temp;

        start++;
        end--;
    }

    printf("Mirror format: %s\n", code);

    return 0;
}