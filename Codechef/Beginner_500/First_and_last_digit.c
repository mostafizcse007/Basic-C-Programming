#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    int arr[test];
    for (int i = 0; i < test; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < test; i++)
    {
        int num, first, last;
        last = arr[i] % 10;
        while (arr[i] >= 10)
        {
            arr[i] /= 10;
        }
        first = arr[i];

        printf("%d\n", first + last);
    }
    return 0;
}