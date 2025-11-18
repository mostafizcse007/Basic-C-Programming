#include <stdio.h>
#include <string.h>
int main(void)
{
    char st[30];
    printf("Enter a string: ");
    gets(st);
    for (int i = 0; st[i] != '\0'; i++)
    {
        if (st[i] >= 'a' && st[i] <= 'z')
        {
            st[i] -= 32;
        }
    }
    puts(st);
    return 0;
}