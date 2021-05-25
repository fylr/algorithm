#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
  double pi = 0.0;
  for (int b = 1; fabs(1.0 / b) >= pow(10, -6); b += 2) {
    if (b / 2 % 2)
      pi -= 1.0 / b;
    else
      pi += 1.0 / b;
  }
  printf("PI=%10.8lf\n", pi * 4);
  return 0;
}