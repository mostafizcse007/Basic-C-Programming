#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    gets(str);
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] += 5;
    }
    printf("%s\n", str);
    return 0;
}