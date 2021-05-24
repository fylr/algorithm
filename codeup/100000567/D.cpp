#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b, c, temp;
  scanf("%d %d %d", &a, &b, &c);
  temp = a;
  if (temp < b) temp = b;
  if (temp < c) temp = c;

  printf("%d\n", temp);

  return 0;
}