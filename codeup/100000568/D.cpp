#include <stdio.h>
#include <stdlib.h>

int main() {
  int sum = 0, i = 1, N;
  scanf("%d", &N);
  while (1) {
    sum += i;
    if (i == N) break;
    i++;
  }

  printf("%d\n", sum);
  return 0;
}