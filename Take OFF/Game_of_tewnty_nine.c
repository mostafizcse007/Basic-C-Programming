#include <stdio.h>
int main(void)
{
    char player;
    scanf("%c", &player);
    if (player == 'A')
        printf("6\n");
    else if (player == 'B')
        printf("4\n");
    return 0;
}