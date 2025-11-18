#include <stdio.h>
#include <string.h>
int main(void)
{
    char a[30], b[10];
    gets(a);
    gets(b);
    // strcat(a, b);
    strncat(a, b, 5);
    puts(a);
    return 0;
}