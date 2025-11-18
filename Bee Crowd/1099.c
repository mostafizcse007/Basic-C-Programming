#include <stdio.h>
int main(void)
{
    int num;
    scanf("%d", &num);
    int arr[num][2];
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < num; i++)
    {
        if (arr[i][0] == arr[i][1])
            printf("0\n");
        else if ((arr[i][0] - arr[i][1] == 1) || (arr[i][1] - arr[i][0] == 1))
            printf("0\n");
        }
}