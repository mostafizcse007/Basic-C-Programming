#include <stdio.h>
int main(void)
{
    int num;
    double sum = 0;
    printf("How many numbers do you want to calculate: ");
    scanf("%d", &num);
    printf("Enter %d numbers... ", num);
    double arr[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%lf", &arr[i]);
    }
    printf("Sum of ");
    for (int i = 0; i < num; i++)
    {
        printf("%.02lf ", arr[i]);
    }
    printf(" numbers are: ");
    for (int i = 0; i < num; i++)
    {
        sum += arr[i];
    }
    printf("%.2lf\n", sum);
    printf("Average of %d numbers is %.2lf\n", num, sum / num);
    return 0;
}