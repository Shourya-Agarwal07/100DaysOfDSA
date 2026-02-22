// Problem: Given a sorted array of n integers, remove duplicates in-place. Print only unique elements in order.
#include <stdio.h>

int main()
{
    int n, i, j;
    int arr[100];

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter %d sorted numbers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    j = 0;
    for (i = 1; i < n; i++)
    {
        if (arr[i] != arr[j])
        {
            j++;
            arr[j] = arr[i];
        }
    }

    int unique_count = j + 1;

    printf("Array after removing duplicates: ");
    for (i = 0; i < unique_count; i++)
    {
        printf("%d", arr[i]);
        if (i < unique_count - 1)
        {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
