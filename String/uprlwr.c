#include <stdio.h>
#include <string.h>
int main(void)
{
    char st[30];
    printf("Enter a string: ");
    gets(st);
    strupr(st);
    puts(st);
    return 0;
}