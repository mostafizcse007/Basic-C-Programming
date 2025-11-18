#include <stdio.h>
int main()
{
    long long int num;
    scanf("%lld", &num);
    long long int arr[num];
    for (long long int i = 0; i < num; i++)
    {
        scanf("%lld", &arr[i]);
    }
    for (long long int i = 0; i < num - 1; i++)
    {
        for (long long int j = 0; j < num - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                long long int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (long long int i = 0; i < num; i++)
    {
        printf("%lld\n", arr[i]);
    }
    return 0;
}
