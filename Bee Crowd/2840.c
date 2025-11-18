#include <stdio.h>
int main()
{
    int radius, litre;
    scanf("%d%d", &radius, &litre);
    int volume = (4 * 3.1415 * radius * radius * radius) / 3;
    litre /= volume;
    printf("%d\n", litre);
    return 0;
}