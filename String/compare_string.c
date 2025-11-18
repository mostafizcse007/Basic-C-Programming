#include <stdio.h.>
#include <string.h.>
int main(void)
{
    char s1[20], s2[10];
    gets(s1);
    gets(s2);
    int value;
    value = strcmp(s1, s2);
    if (value == 0)
        printf("Those strings are equal\n");
    else
        printf("Those strings are not equal\n");
    printf("Value = %d\n", value);
    return 0;
}