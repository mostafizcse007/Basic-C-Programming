#include <stdio.h>
int main()
{
    int row, column, sum = 0;
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
    int l1, r1, l2, r2;
    printf("Enter the cordinates of the rectangle(l1,r1),(l2,r2): ");
    scanf("%d%d%d%d", &l1, &r1, &l2, &r2);
    printf("Modified matrics is:\n");
    for (int k = l1; k <= l2; k++)
    {
        for (int m = r1; m <= r2; m++)
        {
            printf("%d ", arr[k][m]);
            sum += arr[k][m];
        }
        printf("\n");
    }
    printf("Sum of the rectangle is:%d\n", sum);
    return 0;
}