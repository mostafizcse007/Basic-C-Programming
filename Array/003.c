#include <stdio.h>
int main(void)
{
    int i;
    int a[5], b[5], c[5];
    printf("Enter elements of first array(5 integer numbers): ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter elements of second array(5 integer numbers): ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < 5; i++)
    {
        c[i] = a[i] + b[i];
    }
    for (i = 0; i < 5; i++)
    {
        printf("Sum of index %d is %d\n", i, c[i]);
    }

    return 0;
}
