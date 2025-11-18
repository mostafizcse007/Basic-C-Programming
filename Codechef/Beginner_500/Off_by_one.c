#include <stdio.h>
#include <string.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    a += b;
    int arr[2];
    arr[0] = a;
    arr[1] = 1;
    for (int i = 0; i < 2; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}