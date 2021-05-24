#include <stdio.h>
#include <stdlib.h>

int main() {
  int sum = 0, i = 1;
  while (i < 101) {
    sum += i;
    i++;
  }

  printf("%d\n", sum);
  return 0;
}