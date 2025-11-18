#include <stdio.h>
int main()
{
    char str[11];
    fgets(str, sizeof(str), stdin);
    printf("%c\n", str[6]);
    return 0;
}