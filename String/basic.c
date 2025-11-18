#include <stdio.h>
int main(void)
{
    char st[5];
    /* printf("Enter a string: ");
     scanf("%s", st);//Buffer Overflow
     printf("%s\n", st);*/

    /*printf("Enter a string: ");
    gets(st);//Buffer Overflow
    printf("%s", st);*/

    printf("Enter a string: ");
    fgets(st, 5, stdin);
    printf("%s", st);
    return 0;
}