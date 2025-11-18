#include <stdio.h>
int main(void)
{
    int mat1[3][3], mat2[3][2], mat3[3][2], sum, i, j, k;
    printf("Enter elements of first matrics:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter elements of second matrics:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("First matrics:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }
    printf("Second matrics:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum = 0;
            for (k = 0; k < 3; k++)
            {
                sum += mat1[i][k] * mat2[k][j];
                mat3[i][j] = sum;
            }
        }
    }
    printf("Multiplication:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", mat3[i][j]);
        }
        printf("\n");
    }
    return 0;
}