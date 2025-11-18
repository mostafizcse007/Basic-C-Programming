#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100], str3[100], str4[100];
    gets(str1);
    gets(str2);
    strcpy(str3, str1);
    strrev(str3);
    strcpy(str4, str2);
    strrev(str4);
    int value_1 = strcmp(str1, str3);
    int value_2 = strcmp(str2, str4);
    if (value_1 == 0 && value_2 == 0)
        printf("Yes,Palindrome\n");
    else
        printf("Oh, No\n");
    return 0;
}