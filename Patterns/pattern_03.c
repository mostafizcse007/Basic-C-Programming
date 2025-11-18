#include <stdio.h>
int main(void)
{
    int rows, colums;
    printf("Enter number of rows and colums: ");
    scanf("%d %d", &rows, &colums);
    for (int j = 1; j <= rows; j++)
    {

        for (int i = 1; i <= j; i++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}