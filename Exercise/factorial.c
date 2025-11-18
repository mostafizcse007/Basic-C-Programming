#include <stdio.h>
int main(void)
{
    int num,num_1=1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 2; i <= num; i++)
    {
        num_1 = num_1 * i;
    }
    printf("%d\n", num_1);
    return 0;
}