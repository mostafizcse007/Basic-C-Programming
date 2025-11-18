#include <stdio.h>
int main()
{
    int health, check = 0;
    scanf("%d", &health);
    while (health > 0)
    {
        if (health == 1)
        {
            health = 0;
            check++;
        }
        else
        {
            health = health / 2;
            check++;
        }
    }
    printf("%d\n", check);
    return 0;
}