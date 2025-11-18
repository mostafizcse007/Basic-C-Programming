#include <stdio.h>
#include <limits.h>
int main(void)
{
    int row, column;
    int max = INT_MIN, index_r = 0, index_c = 0;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &column);
    int arr[row][column];
    printf("Enter %d elements of the array:\n", row * column);
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
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                index_r = i, index_c = j;
            }
        }
    }
    printf("Maximum elemet of the array is %d\n", max);
    printf("Index of the maximum element is: (%d,%d)\n", index_r, index_c);
    return 0;
}