#include<stdio.h>
int main(){
   int a,b,c,fm;
   scanf("%d %d %d",&a,&b,&c);
   fm=(a+b+ abs(a-b))/2;
   fm=(fm+c+ abs(fm-c))/2;
   printf("%d eh o maior\n",fm);
   return 0;

}
