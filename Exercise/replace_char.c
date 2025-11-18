#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000], a, b;
    fgets(str, sizeof(str), stdin);
    scanf(" %c", &a);
    scanf(" %c", &b);
    for (int i = 0; i < strlen(str) - 1; i++)
    {
        if (str[i] == a)
            str[i] = b;
    }
    printf("%s", str);
    return 0;
}