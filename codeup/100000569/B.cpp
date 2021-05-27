#include <stdio.h>
#include <stdlib.h>

int main() {
  int list[10] = {0};
  for (int i = 0; i < 10; i++) scanf("%d", &list[i]);

  for (int i = 9; i >= 0; i--) printf("%d\n", list[i]);
  return 0;
}