#include <stdio.h>
#include <stdlib.h>

int main() {
  long N, f1 = 1, f2 = 1, temp;
  scanf("%ld", &N);
  for (int i = 3; i <= N; i++) {
    temp = f1 + f2;
    f1 = f2;
    f2 = temp;
  }
  printf("%ld\n", f2);
  return 0;
}