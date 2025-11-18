#include <stdio.h>
#include <string.h>
void modify(char[], char[]);
void main()
{
    char str1[1000], str2[1000];
    modify(str1, str2);
}
void modify(char str1[1000], char str2[1000])
{
    fgets(str1, 1000, stdin);
    fgets(str2, 1000, stdin);
    if (str1[strlen(str1) - 1] == '\n')
        str1[strlen(str1) - 1] = ' ';
    strcat(str1, str2);
    printf("%s", str1);
    modify(str1, str2);
}