#include <stdio.h>
int main(void)
{
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == 0)
        printf("There is total 1 digit.\n");
    while (num != 0)
    {
        count += 1;
        num /= 10;
    }
    printf("Thers is total %d digis.\n", count);
    return 0;
}