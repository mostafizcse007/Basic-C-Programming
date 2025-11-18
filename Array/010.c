#include <stdio.h>
int main(void)
{
    int arr[3][3], i, j, sumr, sumc;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        sumr = 0, sumc = 0;
        for (j = 0; j < 3; j++)
        {
            sumr += arr[i][j];
            sumc += arr[j][i];
        }
        printf("Sum of Rows: %d\nSum of Columns: %d\n", sumr, sumc);
    }
    return 0;
}