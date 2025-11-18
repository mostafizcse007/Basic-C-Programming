#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[30];
    printf("Enter your name: ");
    fgets(str, sizeof(str), stdin);
    puts(str);
    return 0;
}