#include <stdio.h>
int main(void)
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%d ", j);
            }
            printf("\n");
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%c ", j + 64);
            }
            printf("\n");
        }
    }
    return 0;
}