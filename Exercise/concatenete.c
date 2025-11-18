#include <stdio.h>
#include <string.h>
int main(void)
{
    char str1[50], str2[30];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    int len_1 = strlen(str1);
    int len_2 = strlen(str2);
    for (int i = 0; i <= len_2; i++)
    {
        str1[len_1 + i] = str2[i];
    }
    puts(str1);
    return 0;
}