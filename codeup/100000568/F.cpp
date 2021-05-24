#include <stdio.h>
#include <stdlib.h>

int main() {
  for (int i = 1; i < 5; i++) {
    for (int j = i; j <= 5 * i; j += i) {
      printf("%3d", j);
    }
    printf("\n");
  }
  return 0;
}