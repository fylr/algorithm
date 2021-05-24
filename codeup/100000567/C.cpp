#include <stdio.h>
#include <stdlib.h>

int main() {
  double a, b, c, temp;
  scanf("%lf %lf %lf", &a, &b, &c);
  if (a > b) temp = a, a = b, b = temp;
  if (a > c) temp = a, a = c, c = temp;
  if (b > c) temp = b, b = c, c = temp;

  printf("%.2lf %.2lf %.2lf\n", a, b, c);
  return 0;
}
