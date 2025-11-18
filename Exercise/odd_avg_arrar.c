#include <stdio.h>
int main(void)
{
    int arr[10], sum = 0, count = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 != 0)
        {
            sum += arr[i];
            count++;
        }
    }
    double avg;
    avg = (double)sum / (double)count;
    printf("%.1lf\n", avg);

    return 0;
}