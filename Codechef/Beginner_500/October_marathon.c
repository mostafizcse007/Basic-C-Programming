#include <stdio.h>
int main()
{
    int hour;
    scanf("%d", &hour);
    if (hour < 3)
        printf("GOLD\n");
    else if (hour >= 3 && hour < 6)
        printf("SILVER\n");
    else if (hour >= 6)
        printf("Bronze");
    return 0;
}