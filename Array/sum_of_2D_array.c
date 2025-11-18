#include <stdio.h>
int main(void)
{
    int row, column;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &column);
    int arr[row][column], sum = 0;
    printf("Enter %d elements of the array: ", row * column);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Before addition: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("After adding all the elements of the array\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("Sum is: %d\n", sum);
    return 0;
}