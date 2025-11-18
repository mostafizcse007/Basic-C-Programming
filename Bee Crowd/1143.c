#include <stdio.h>
int main(void)
{
    int num;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        int square = i * i, cube = i * i * i;
        printf("%d %d %d\n", i, square, cube);
    }
    return 0;
}