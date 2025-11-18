#include <stdio.h>
int main(void)
{
    int arr1[2][3], arr2[2][3], i, j, arr3[2][3];
    printf("Enter first Matrics:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter second Matrics:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("First matrics:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }
    printf("\nSecond matrics:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }
    printf("After addition of two matrics:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            
            arr3[i][j]= arr1[i][j] + arr2[i][j];
            printf("%d\t", arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}