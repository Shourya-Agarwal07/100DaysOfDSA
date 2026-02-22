// Problem: Given an array of n integers, reverse the array in-place using two-pointer approach.
#include <stdio.h>

int main()
{
    int n, i, start, end, temp;
    int arr[100];
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    start = 0;
    end = n - 1;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    printf("Reversed array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i < n - 1)
        {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}

