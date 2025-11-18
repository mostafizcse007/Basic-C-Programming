#include <stdio.h>
#include <string.h>
int main(void)
{
    char s1[30];
    puts("Enter a string: ");
    gets(s1);
    strrev(s1);
    puts(s1);
    return 0;
}