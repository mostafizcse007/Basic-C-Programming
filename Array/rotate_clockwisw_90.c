#include <stdio.h>
int main()
{
    int row;
    printf("Enter number of rows and columns: ");
    scanf("%d", &row);
    int arr[row][row];
    printf("Enter %d elements of the matrics:\n", row * row);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The matrics is:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for (int i = 0; i < row; i++)
    {
        int j = 0, k = row - 1;
        while (j < k)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
            j++;
            k--;
        }
    }
    printf("\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}