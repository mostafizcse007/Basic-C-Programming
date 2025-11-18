#include <stdio.h>
int main(void)
{
    int rows;
    printf("How many rows do you want to print? \n");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= (rows - 1); j++)
        {
            printf(" ", j);
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            printf("*");
        }
        for (int x = 1; x <= (rows - 1); x++)
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}