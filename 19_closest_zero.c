//Given an array of integers, find two elements whose sum is closest to zero.
#include <stdio.h>

int main()
{
    int n, i, j;
    int arr[100];
    int sum, abs_sum, min_abs_sum;
    int e1, e2;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    if (n < 2)
    {
        printf("Invalid input size!\n");
        return 0;
    }

    e1 = arr[0];
    e2 = arr[1];
    sum = e1 + e2;
    if (sum < 0)
        min_abs_sum = -sum;
    else
        min_abs_sum = sum;

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            sum = arr[i] + arr[j];
            if (sum < 0)
                abs_sum = -sum;
            else
                abs_sum = sum;

            if (abs_sum < min_abs_sum)
            {
                min_abs_sum = abs_sum;
                e1 = arr[i];
                e2 = arr[j];
            }
        }
    }

    printf("Two elements with sum closest to zero: %d and %d\n", e1, e2);

    return 0;
}