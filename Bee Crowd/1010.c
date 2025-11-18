#include<stdio.h>

int main()
{
    int cop1, cop2, uop1, uop2;
    double pop1, pop2, fm;
    scanf("%d %d %lf",&cop1,&uop1,&pop1);
    scanf("%d %d %lf",&cop2,&uop2,&pop2);
    fm = (uop1*pop1) + (uop2*pop2);
    printf("VALOR A PAGAR: R$ %.2lf\n",fm);
    return 0;
}