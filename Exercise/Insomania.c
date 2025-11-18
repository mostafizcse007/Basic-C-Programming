#include <stdio.h>
#include <limits.h>
int main()
{
    int test, check = 0;
    scanf("%d", &test);
    double arr[test][3], avg[test], min = 1233234;
    for (int i = 0; i < test; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%lf", &arr[i][j]);
        }
    }
    for (int i = 0; i < test; i++)
    {
        avg[i] = 0;
    }
    for (int i = 0; i < test; i++)
    {
        double sum = 0, av = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        av = sum / 3;
        avg[i] = av;
    }
    for (int i = 0; i < test; i++)
    {
        if (min > avg[i])
        {
            min = avg[i];
            check = i;
        }
    }
    printf("%.2lf\n", min);
    for (int i = 0; i < 3; i++)
    {
        printf("%.1lf ", arr[check][i]);
    }
    return 0;
}