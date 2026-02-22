//Write a recursive function fib(n) to compute the n-th Fibonacci number where fib(0)=0 and fib(1)=1
#include <stdio.h>
int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}
int main()
{
    int n;
    printf("Enter a number to find Fibonacci: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Invalid input! Enter a non-negative number.\n");
        return 0;
    }
    int result = fib(n);
    printf("Fibonacci of %d is: %d\n", n, result);
    return 0;
}