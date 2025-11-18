#include <stdio.h>
#include <limits.h>
int main()
{
    int num, min = INT_MAX, check = 0;
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < num; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            check = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", min, check);
    return 0;
}