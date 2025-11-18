#include<stdio.h>

int main()
{
    char name[30];
    double fi, ei, fm;
    gets(name);
    scanf("%lf %lf",&fi,&ei);
    fm =fi + (ei*.15);
    printf("TOTAL = R$ %.2lf\n",fm);
    return 0;
}