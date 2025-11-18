#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if (num % 2 == 0 && num % 3 == 0)
        printf("Guest\n");
    else
        printf("Enemy\n");
    return 0;
}