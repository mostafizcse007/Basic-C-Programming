#include <stdio.h>
#include <string.h>
int main()
{
    for (int i = 0; i < 10; i++)
    {
        char str[100];
        scanf("%s", str);
        if (i == 2 || i == 6 || i == 8)
            printf("%s\n", str);
    }
    return 0;
}