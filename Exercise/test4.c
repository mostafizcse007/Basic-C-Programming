#include <stdio.h>
int main()
{
    int i, x = 1;
    for (i = 1; i < 20; i++, x++)
    {
        if (x % 3 == 0)
        {
            x *= 3;
            printf("SpaceX\n");
            continue;
            x = x + 5;
        }
        if (x > 10 && x % 8 == 0)
        {
            printf("Blue Origin %d\n", i);
            x += 5;
            break;
        }
        else
        {
            x += 3;
            printf("Virgin Galactic\n");
        }
    }
    return 0;
}