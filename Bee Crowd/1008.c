#include<stdio.h>

int main()
{
    int num, wh;
    double rpwh,fm;
    scanf("%d",&num);
    scanf("%d %lf",&wh,&rpwh);
    fm = wh*rpwh;
    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %.2lf\n",fm);
    return 0;
}