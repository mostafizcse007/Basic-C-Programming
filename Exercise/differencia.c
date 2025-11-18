#include<stdio.h>
int main(void){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int x=c*d;
    int y=a*b;
    int z= y - x;
    printf("DIFFERENCA = %d\n",z);
    return 0;
}