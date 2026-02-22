// Problem: Implement linear search to find key k in an array. Count and display the number of comparisons performed.

#include <stdio.h>

int main()
{
    int n, k, i;
    int arr[100];
    int comparisons = 0;
    int found = -1;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the key to search: ");
    scanf("%d", &k);

    for (i = 0; i < n; i++)
    {
        comparisons++;
        if (arr[i] == k)
        {
            found = i;
            break;
        }
    }

    if (found == -1)
    {
        printf("Key not found!\n");
    }
    else
    {
        printf("Key found at position: %d (1-based)\n", found + 1);
    }

    printf("Total comparisons performed: %d\n", comparisons);

    return 0;
}