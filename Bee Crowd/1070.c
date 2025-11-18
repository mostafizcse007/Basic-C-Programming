#include <stdio.h>

int main()
{

    int num, a;
    scanf("%d", &a);

    for (num = a; num <= a + 11; num++)
    {

        if (num % 2 != 0)
        {

            printf("%d\n", num);
        }
    }

    return 0;
}
