#include <stdio.h>
int main()
{
    int row1, col1, row2, col2;
    printf("Enter number of rows and columns of first matrics: ");
    scanf("%d%d", &row1, &col1);
    printf("Enter number of rows and columns of second matrics: ");
    scanf("%d%d", &row2, &col2);
    int mat1[row1][col1], mat2[row2][col2], mat3[row1][col2];
    if (col1 == row2)
    {
        printf("Enter %d elements of first matrics:\n", row1 * col1);
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                scanf("%d", &mat1[i][j]);
            }
        }
        printf("Enter %d elements of second matrics:\n", row2 * col2);
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                scanf("%d", &mat2[i][j]);
            }
        }
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                int sum = 0;
                for (int k = 0; k < row2; k++)
                {
                    sum += mat1[i][k] * mat2[k][j];
                    mat3[i][j] = sum;
                }
            }
        }
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                printf("%d ", mat3[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}