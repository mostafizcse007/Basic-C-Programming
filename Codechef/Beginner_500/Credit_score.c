#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if (num >= 0 && num <= 1000)
    {
        if (num >= 750)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}