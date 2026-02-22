// Write a C program to delete the element at a given 1-based position pos from an array of n integers. Shift remaining elements to the left.
#include <stdio.h>

int main()
{
    int n, pos, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete (1 to %d): ", n);
    scanf("%d", &pos);
    if (pos < 1 || pos > n)
    {
        printf("Invalid position!\n");
        return 0;
    }
    int deleteIndex = pos - 1;

    for (i = deleteIndex; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n = n - 1;

    printf("Array after deletion: ");
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