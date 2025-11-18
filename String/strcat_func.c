#include <stdio.h>
#include <string.h>
int main(void)
{
    char s1[30], s2[10];
    gets(s1);
    gets(s2);
    int len_s1 = strlen(s1);
    int len_s2 = strlen(s2);
    for (int i = 0; i <= len_s2; i++)
    {
        s1[len_s1 + i] = s2[i];
    }
    puts(s1);
    return 0;
}