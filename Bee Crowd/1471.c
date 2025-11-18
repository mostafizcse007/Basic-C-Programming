#include <stdio.h>
int main()
{
    while (1)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        if (a == b)
        {
            printf("*\n");
            break;
        }
        else
        {
            int arr1[a], arr2[b];
            for (int i = 0; i < a; i++)
            {
                arr1[i] = 0;
            }
            for (int i = 0; i < b; i++)
            {
                scanf("%d", &arr2[i]);
            }
            for (int i = 0; i < b; i++)
            {
                if (arr2[i] >= 1 && arr2[i] <= a)
                {
                    arr2[i] -= 1;
                    arr1[arr2[i]]++;
                }
            }
            for (int i = 0; i < a; i++)
            {
                if (arr1[i] == 0)
                    printf("%d ", i + 1);
            }
            printf("\n");
        }
    }
}
