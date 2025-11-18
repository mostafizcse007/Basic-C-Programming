#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < 1; i++)
    {
        int arr[test];
        for (int j = 0; j < test; j++)
        {
            scanf("%d", &arr[j]);
        }
        for (int j = 0; j < test; j++)
        {
            if (arr[j] == 0)
                printf("Fib (0) = %d\n", arr[j]);
            else
                printf("Fib (%d) = %d\n", arr[j], arr[j] - 1);
        }
    }
    return 0;
}