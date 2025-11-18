#include <stdio.h>
int main(void)
{
    int num_1, num_2, hcf, lcm;
    printf("Enter a number: ");
    scanf("%d", &num_1);
    printf("Enter another number: ");
    scanf("%d", &num_2);
    for (int i = 1; i <= num_1 && i <= num_2; i++)
    {
        if (num_1 % i == 0 && num_2 % i == 0)
        {
            hcf = i;
        }
    }
    lcm = (num_1 * num_2) / hcf;
    printf("HCF and LCM of %d and %d are %d and %d\n", num_1, num_2, hcf, lcm);
    return 0;
}