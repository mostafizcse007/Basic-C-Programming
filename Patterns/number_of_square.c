#include <stdio.h>
int main(void)
{
    int row, columns;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &columns);
    if (row == columns)
    {
        for (int i = 1; i <= row; i++)
        {
            for (int j = 1; j <= columns; j++)
            {
                printf("%d ", j);
            }
            printf("\n");
        }
    }
    else
        printf("A square must have same number of rows and columns.\n");
    return 0;
}