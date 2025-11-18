#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    char check;
    scanf(" %c", &check);
    double arr[12][12], sum = 0, avg = 0;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%lf", &arr[i][j]);
        }
    }
    for (int i = 0; i < 12; i++)
    {
        sum += arr[i][num];
    }
    avg = sum / 12;
    if (check == 'S')
        printf("%.1lf\n", sum);
    else if (check == 'M')
        printf("%.1lf\n", avg);
    return 0;
}