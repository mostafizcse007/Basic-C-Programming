#include <stdio.h>
int main()
{
    int test, team;
    scanf("%d%d", &test, &team);
    int arr[test][team];
    for (int i = 0; i < test; i++)
    {
        for (int j = 0; j < team; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    double arr2[test], max = 0;
    for (int i = 0; i < test; i++)
    {
        arr2[i] = 0;
    }
    for (int i = 0; i < test; i++)
    {
        double sum = 0, avg;
        for (int j = 0; j < team; j++)
        {
            sum += arr[i][j];
        }
        avg = sum / team;
        arr2[i] = avg;
    }
    for (int i = 0; i < test; i++)
    {
        if (arr2[i] > max)
            max = arr2[i];
    }
    printf("Best Avg: %.3lf\n", max);
    return 0;
}