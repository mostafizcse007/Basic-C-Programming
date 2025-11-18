#include <stdio.h>
#include <string.h>
int main(void)
{
    char str1[30], str2[30];
    printf("Enter a string: ");
    gets(str1);
    strcpy(str2, str1);
    puts(str2);
    return 0;
}