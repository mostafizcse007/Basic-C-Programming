#include <stdio.h>
#include <limits.h>
int main()
{
    int row, column;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &column);
    int arr[row][column];
    printf("Enter %d elements of the matrics:\n", row * column);
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
    int max = INT_MIN, check = 0;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < column; j++)
        {
            sum += arr[i][j];
            if (sum > max)
            {
                max = sum;
                check = i + 1;
            }
        }
    }
    printf("Maximum sum found in row number %d\n", check);
    printf("Elements in row number %d is:\n", check);
    for (int k = check - 1; k <= check - 1; k++)
    {
        for (int m = 0; m < column; m++)
        {
            printf("%d ", arr[k][m]);
        }
    }
    printf("\nSum of these elements: %d\n", max);
    return 0;
}