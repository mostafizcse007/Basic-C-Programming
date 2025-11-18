#include <stdio.h>
int main(void)
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j<=rows+1-i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}