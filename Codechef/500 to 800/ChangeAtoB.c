#include <stdio.h>

int main()
{
    long long int test;
    scanf("%lld", &test);

    for (long long int i = 0; i < test; i++)
    {
        long long int a, b, c, count = 0;
        scanf("%lld %lld %lld", &a, &b, &c);

        while (a < b)
        {

            long long int temp1 = a + 1;
            long long int temp2 = a * c;

            if (temp2 <= b && temp2 > temp1)
            {

                a = temp2;
                count++;
            }
            else
            {

                a = temp1;
                count++;
            }
        }

        printf("%lld\n", count);
    }

    return 0;
}
