#include <stdio.h>
#include <string.h>
int main(void)
{
    char st[30], temp;
    puts("Enter a string: ");
    gets(st);
    int len = strlen(st);
    for (int i = 0, j = len - 1; i < len / 2; i++, j--)
    {
        temp = st[i];
        st[i] = st[j];
        st[j] = temp;
    }
    puts(st);
    return 0;
}