#include <stdio.h>
int main(void)
{
    int i, c1, c2;
    while (i = 1)
    {
        scanf("%d%d", &c1, &c2);
        if (c1 > 0 && c2 > 0)
            printf("primeiro\n");
        else if (c1 > 0 && c2 < 0)
            printf("quarto\n");
        else if (c1 < 0 && c2 < 0)
            printf("terceiro\n");
        else if (c1 < 0 && c2 > 0)
            printf("segundo\n");
        else
            break;
    }
    return 0;
}