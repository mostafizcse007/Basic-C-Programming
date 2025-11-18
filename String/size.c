#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';
    int len = strlen(str);
    printf("%d\n", len);
    return 0;
}