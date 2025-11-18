#include <stdio.h>
int main()
{
    int num, first = 0, second = 1, temp;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        if (i == 0)
            temp = first;
        else if (i == 1)
            temp = second;
        else
        {
            temp = first + second;
            first = second;
            second = temp;
        }
        if (i > 0)
        {
            printf(" ");
        }
        printf("%d", temp);
    }
    printf("\n");
    return 0;
}