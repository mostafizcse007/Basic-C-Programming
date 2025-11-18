/*#include <stdio.h>
#include <string.h>
int main()
{
    int num;
    scanf("%d", &num);
    getchar();
    if (num >= 1 && num <= 100)
    {
        for (int i = 1; i <= num; i++)
        {
            int num2, count[26] = {0};
            scanf("%d", &num2);
            getchar();
            if (num2 >= 1 && num2 <= 7)
            {
                for (int j = 0; j < num2; j++)
                {
                    char str[26];
                    scanf("%s", str);
                    int len = strlen(str);
                    count += len;
                }
                int num3 = count - num2;
                printf("Case %d: %d\n", i + 1, num3);
            }
        }
    }
    return 0;
}*/

#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++)
    {
        int N;
        scanf("%d", &N);

        int city_count[26] = {0}; // Array to store count of each city
        for (int i = 0; i < N; i++)
        {
            char cities[27]; // 26 cities + null terminator
            scanf("%s", cities);
            int len = strlen(cities);
            for (int j = 0; j < len; j++)
            {
                city_count[cities[j] - 'a'] = 1; // Mark city as present
            }
        }

        // Count unique cities
        int unique_cities = 0;
        for (int i = 0; i < 26; i++)
        {
            if (city_count[i] == 1)
            {
                unique_cities++;
            }
        }

        printf("Case %d: %d\n", t, unique_cities);
    }

    return 0;
}
