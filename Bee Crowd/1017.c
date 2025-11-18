#include <stdio.h>

int main(void) {
  int hr,sp;
  float lt = 12;
  float fm,fm2;
  scanf("%d %d",&hr,&sp);
  fm =hr*sp;
  fm2 = fm/lt;
  printf("%.3f\n",fm2);
  return 0;
}
