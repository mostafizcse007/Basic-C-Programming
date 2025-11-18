#include <stdio.h>
int main(void)
{
    int area, ammount, sum = 0;
    scanf("%d %d", &area, &ammount);
    int arr[area];
    for (int i = 0; i < area; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < area; i++)
    {
        sum += arr[i];
    }
    if (sum >= ammount)
        printf("Save\n");
    else
        printf("Die\n");
    return 0;
}