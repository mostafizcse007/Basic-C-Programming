#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    if (str1[strlen(str1) - 1] == '\n')
        str1[strlen(str1) - 1] = ' ';
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    strcat(str1, str2);
    printf("Original string: %s", str1);
    return 0;
}