#include <stdio.h>
int main(void)
{
    int num;
    printf("Enter elements: ");
    scanf("%d", &num);
    int rahim[num];
    int karim[num];
    printf("Elements under Rahim: ");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &rahim[i]);
        printf("%d ", rahim[i]);
    }
    for (int i = 0; i < num; i++)
    {
        karim[i] = rahim[i];
    }
    printf("\nElements under Karim: ");
    for (int i = 0; i < num; i++)
    {
        printf("%d ", karim[i]);
    }
    return 0;
}