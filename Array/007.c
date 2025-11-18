#include <stdio.h>
int main(void)
{
    int arr[2][3], sum = 0;
    printf("Enter the numbers: ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Numbers you enterd: ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
            sum += arr[i][j];
        }
    }
    printf("\nSummation of this numbers: %d\n", sum);
    return 0;
}