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

        if (arr[i][1] == 0)
            printf("divisao impossivel\n");
        else
            printf("%.1lf\n", (double)arr[i][0] / (double)arr[i][1]);
    }
    return 0;
}