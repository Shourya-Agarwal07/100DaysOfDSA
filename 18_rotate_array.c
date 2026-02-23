//Given an array of integers, rotate the array to the right by k positions.
#include <stdio.h>
void reverse(int arr[], int start, int end)
{
    int temp;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int n, k, i;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate (k): ");
    scanf("%d", &k);

    if (n > 0)
    {
        k = k % n;

        reverse(arr, 0, n - 1);
        reverse(arr, 0, k - 1);
        reverse(arr, k, n - 1);

        printf("Array after rotation: ");
        for (i = 0; i < n; i++)
        {
            printf("%d", arr[i]);
            if (i < n - 1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    else
    {
        printf("Invalid input size!\n");
    }

    return 0;
}
