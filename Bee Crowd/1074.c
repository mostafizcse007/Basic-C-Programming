#include <stdio.h>
int main()
{
    int num, b;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &b);

        if (b > 0)
        {
            if (b % 2 == 0)
                printf("EVEN POSITIVE\n");
            else
                printf("ODD POSITIVE\n");
        }
        else if (b < 0)
        {
            if (b % 2 == 0)
                printf("EVEN NEGATIVE\n");
            else
                printf("ODD NEGATIVE\n");
        }
        else if (b == 0)
        {
            printf("NULL\n");
        }
    }

    return 0;
}
