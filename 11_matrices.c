//Write a program to perform addition of two matrices having the same dimensions. The sum of two matrices is obtained by adding corresponding elements of the matrices.

#include <stdio.h>
int main()
{
    int m, n, i, j;
    int matrix1[10][10], matrix2[10][10], result[10][10];

    printf("Enter number of rows (m): ");
    scanf("%d", &m);

    printf("Enter number of columns (n): ");
    scanf("%d", &n);

    printf("\nEnter elements of first matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\nEnter elements of second matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("\nSum of the two matrices:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}