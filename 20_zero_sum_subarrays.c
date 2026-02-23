// Problem: Given an array of integers, count the number of subarrays whose sum is equal to zero.
#include <stdio.h>

int main()
{
    int n, i, j,current_sum,count = 0;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        current_sum = 0;
        for (j = i; j < n; j++)
        {
            current_sum += arr[j];
            if (current_sum == 0)
            {
                count++;
            }
        }
    }

    printf("Number of subarrays with 0 sum: %d\n", count);

    return 0;
}