#include <stdio.h>
int main()
{
    int i;
    while (i = 1)
    {
        int num, sum = 0;
        scanf("%d", &num);
        if (num == 0)
            break;
        else if (num % 2 == 0)
        {
            for (int j = 0; j < 5; j++)
            {

                sum += num;
                num += 2;
            }
        }
        else
        {
            num += 1;
            for (int j = 0; j < 5; j++)
            {

                sum += num;
                num += 2;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}