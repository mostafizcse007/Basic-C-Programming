#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';
    for (int i = 0, j = strlen(str) - 1; i < j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("%s", str);
    return 0;
}