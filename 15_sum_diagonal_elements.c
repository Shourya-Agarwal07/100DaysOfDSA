// Given a matrix, calculate the sum of its primary diagonal elements. The primary diagonal consists of elements where row index equals column index.
#include <stdio.h>

int main()
{
    int m, n;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int matrix[50][50];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;

    for (int i = 0; i < m && i < n; i++)
    {
        sum = sum + matrix[i][i];
    }

    printf("Sum of primary diagonal elements = %d\n", sum);

    return 0;
}