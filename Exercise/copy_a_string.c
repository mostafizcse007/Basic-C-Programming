#include <stdio.h>
#include <string.h>
int main(void)
{
    char str1[30], str2[30];
    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);
    int len = strlen(str1);
    for (int i = 0; i <= len; i++)
    {
        str2[i] = str1[i];
    }
    puts(str2);
    return 0;
}