#include <stdio.h>
int main(void)
{
    int arr[3][3], sum = 0, count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            printf("%d\n", arr[i][j]);
            sum += arr[i][j];
            count += 1;
        }
    }
    printf("Sum of the numbers are:%d\n", sum);
    printf("total numbers:%d\n", count);
    return 0;
}