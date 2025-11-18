#include <stdio.h>
int main(void)
{
    int row1, row2, column1, column2;
    printf("Enter row of first matrics: ");
    scanf("%d", &row1);
    printf("Enter columns of first matrics: ");
    scanf("%d", &column1);
    int arr1[row1][column1];
    printf("Enter row of second matrics: ");
    scanf("%d", &row2);
    printf("Enter columns of first matrics: ");
    scanf("%d", &column2);
    int arr2[row2][column2];
    if (row1 == row2 && column1 == column2)
    {
        printf("Enter %d elements of first matrics: \n", row1 * column1);
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column1; j++)
            {
                scanf("%d", &arr1[i][j]);
            }
        }
        printf("\n");
        printf("Enter %d elements of second matrics: \n", row2 * column2);
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                scanf("%d", &arr2[i][j]);
            }
        }
        printf("\n");
        int arr3[row1][column1];
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column1; j++)
            {
                arr3[i][j] = arr1[i][j] + arr2[i][j];
            }
        }
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column1; j++)
            {
                printf("%d ", arr3[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("Dimension of two matrics are not equal\n");
    return 0;
}