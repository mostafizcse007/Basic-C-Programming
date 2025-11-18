#include <stdio.h>
#include <string.h>
int main(void)
{
    char str1[30], str2[30];
    int count = 0;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
        {
            count = 1;
            break;
        }
    }
    if (count == 1)
        printf("Those strings are not equal\n");
    else
        printf("Those strings are equal\n");
    return 0;
}