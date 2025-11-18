#include <stdio.h>
int main(void)
{
    int rows, columns;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);
    if (rows == columns)
    {
        for (int i = 1; i <= rows; i++)
        {
            for (int j = 1; j <= columns; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else
        printf("Number of rows and number of columns are not match.\n");
    return 0;
}