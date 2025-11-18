#include <stdio.h>
int main(void)
{
    int row, column, max = 0, check_row = 0;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &column);
    int arr[row][column];
    printf("Enter %d elements of the array(0 and 1 only):\n", row * column);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The matrics is:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int k = 0; k < row; k++)
    {
        int count = 0;
        for (int l = 0; l < column; l++)
        {
            if (arr[k][l] == 1)
            {
                count++;
            }
        }
        if (count > max)
        {
            max = count;
            check_row = k + 1;
        }
    }
    printf("Maximum 1 find in row %d\n", check_row);
    printf("Row %d is:\n", check_row);
    for (int i = check_row - 1; i < check_row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }
    printf("\nSum of these elements are:%d\n", max);
    return 0;
}