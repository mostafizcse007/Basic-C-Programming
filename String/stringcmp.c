#include <stdio.h>
#include <string.h>
int main(void)
{
    int count = 0;
    char s1[30], s2[20];
    puts("Enter first string:");
    gets(s1);
    puts("Enter second string:");
    gets(s2);
    for (int i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
        {
            count = 1;
            break;
        }
    }
    if (count == 1)
        puts("Those strings are not equal.");
    else
        puts("Those strings are equal.");
    return 0;
}