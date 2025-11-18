#include <stdio.h>
int main(void)
{
    int a, b;
    while (1)
    {
        scanf("%d%d", &a, &b);
        if (a > b)
            printf("Decrescente\n");
        else if (a < b)
            printf("Crescente\n");
        else
            break;
    }
    return 0;
}