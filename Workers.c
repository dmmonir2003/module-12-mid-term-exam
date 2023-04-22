#include <stdio.h>
#include <math.h>
int main()
{

  int M1, M2, D;
  scanf("%d %d %d", &M1, &M2, &D);
  int totalWark1 = M1 * D;
  int T = (M1 * D) / M2;

  printf("%d", T);

  return 0;
}