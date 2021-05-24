#include <stdio.h>
#include <stdlib.h>

int main() {
  int sum = 0, i = 1;
  while (1) {
    sum += i;
    if (sum > 1000) break;
    i++;
  }

  printf("%d\n", i);
  return 0;
}