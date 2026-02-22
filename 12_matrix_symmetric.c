//Write a program to check whether a given matrix is symmetric. A matrix is said to be symmetric if it is a square matrix and is equal to its transpose (i.e., element at position [i][j] is equal to element at position [j][i] for all valid i and j).

#include <stdio.h>

int main()
{
    int m, n, i, j;
    int matrix[10][10];
    int is_symmetric;

    printf("Enter number of rows (m): ");
    scanf("%d", &m);

    printf("Enter number of columns (n): ");
    scanf("%d", &n);

    printf("\nEnter elements of the matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    if (m != n)
    {
        printf("\nMatrix is NOT symmetric (not a square matrix).\n");
        return 0;
    }

    is_symmetric = 1;
    for (i = 0; i < m; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                is_symmetric = 0;
                break;
            }
        }
        if (is_symmetric == 0)
        {
            break;
        }
    }

    if (is_symmetric == 1)
    {
        printf("\nMatrix IS symmetric!\n");
    }
    else
    {
        printf("\nMatrix is NOT symmetric!\n");
    }

    return 0;
}