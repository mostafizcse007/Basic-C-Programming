#include <stdio.h>
int main(void)
{
    int i;
    int num[5];
    int sum = 0, avg;
    printf("Enter marks of 5 students: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 5; i++)
    {
        sum += num[i];
    }
    avg = sum / 5;
    printf("Sum of total marks: %d\n Average of total marks: %d\n", sum, avg);
    return 0;
}