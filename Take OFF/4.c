#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    scanf("%d", &a);
    int b = pow(2, a), c = a * a;
    if (b > c)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}