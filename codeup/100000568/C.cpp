#include <stdio.h>
#include <stdlib.h>

int main() {
  int sum = 0;
  for (int i = 1; i < 101; i++) {
    sum += i;
  }

  printf("%d\n", sum);
  return 0;
}