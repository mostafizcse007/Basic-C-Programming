#include <stdio.h>

int main(void) {
  double x1,y1;
  double x2,y2;
  double fm1,fm2,fm3,fm4;
  scanf("%lf %lf",&x1,&y1);
  scanf("%lf %lf",&x2,&y2);
  fm1 =(x2-x1)*(x2-x1);
  fm2 =(y2-y1)*(y2-y1);
  fm3 = fm1 + fm2;
  fm4 = sqrt(fm3);
  printf("%.4lf\n",fm4);


  return 0;
}
