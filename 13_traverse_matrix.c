// You are given a rectangular matrix of integers. Starting from the outer boundary, traverse the matrix in a clockwise manner and continue moving inward layer by layer until all elements are visited.
#include<stdio.h>

    int main()
{
    int r, c, top = 0, bottom, left = 0, right;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    bottom = r - 1;
    right = c - 1;


    int matrix[50][50];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Spiral order is:\n");


    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            printf("%d ", matrix[top][i]);
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            printf("%d ", matrix[i][right]);
        }
        right--;

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                printf("%d ", matrix[bottom][i]);
            }
            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                printf("%d ", matrix[i][left]);
            }
            left++;
        }
    }

    return 0;
}