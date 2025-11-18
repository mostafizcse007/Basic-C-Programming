#include <stdio.h>
#include <limits.h>
int main()
{
    int test, max = INT_MIN, check = 0;
    scanf("%d", &test);
    int arr[test][7];
    for (int i = 0; i < test; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int arr2[test];
    for (int i = 0; i < test; i++)
    {
        arr2[i] = 0;
    }
    for (int i = 0; i < test; i++)
    {
        int sum = 0;
        for (int j = 0; j < 7; j++)
        {
            sum += arr[i][j];
        }
        arr2[0] = sum;
    }
    for (int i = 0; i < test; i++)
    {
        if (arr2[i] > max)
        {
            max = arr2[i];
            check = i + 1;
        }
    }
    printf("Roll %d is the performer of the week\n", check);
    return 0;
}