#include <stdio.h>
int main(void)
{
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    int a = arr[1] / arr[0];
    int b = arr[3] / arr[2];
    if (a < b)
        printf("SpaceX\n");
    else
        printf("Blue Origin\n");
    return 0;
}