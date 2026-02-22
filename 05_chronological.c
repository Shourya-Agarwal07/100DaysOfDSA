//Problem: A system receives two separate logs of user arrival times from two different servers. Each log is already sorted in ascending order. Your task is to create a single chronological log that preserves the correct order of arrivals.

#include <stdio.h>
int main()
{
    int p, q, i, j, k;
    int log1[100], log2[100], merged[200];
    printf("Enter number of entries in server 1 log: ");
    scanf("%d", &p);
    printf("Enter %d sorted arrival times from server 1: ", p);
    for (i = 0; i < p; i++)
    {
        scanf("%d", &log1[i]);
    }
    printf("Enter number of entries in server 2 log: ");
    scanf("%d", &q);
    printf("Enter %d sorted arrival times from server 2: ", q);
    for (i = 0; i < q; i++)
    {
        scanf("%d", &log2[i]);
    }
    i = 0;
    j = 0;
    k = 0;
    while (i < p && j < q)
    {
        if (log1[i] <= log2[j])
        {
            merged[k] = log1[i];
            i++;
        }
        else
        {
            merged[k] = log2[j];
            j++;
        }
        k++;
    }
    while (i < p)
    {
        merged[k] = log1[i];
        i++;
        k++;
    }
    while (j < q)
    {
        merged[k] = log2[j];
        j++;
        k++;
    }
    printf("Chronological log: ");
    for (i = 0; i < p + q; i++)
    {
        printf("%d", merged[i]);
        if (i < p + q - 1)
        {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
