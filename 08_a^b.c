// Problem: Given integers a and b, compute a^b using recursion without using pow() function.
#include <stdio.h>

int power(int a, int b)
{
    if (b == 0)
        return 1;
    else
        return a * power(a, b - 1);
}

int main()
{
    int a, b;
    printf("Enter two numbers (a b): ");
    scanf("%d %d", &a, &b);
    int result = power(a, b);
    printf("Result: %d\n", result);

    return 0;
}