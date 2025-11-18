#include <stdio.h>
int main(void)
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    if (rows >= 1 && rows <= 26)
    {
        for (int i = 1; i <= rows; i++)
        {
            for (int j = 1; j <= rows; j++)
            {
                printf("%c ", j + 64);
            }
            printf("\n");
        }
    }
    else
        printf("You are out of parametere\n");

    return 0;
}