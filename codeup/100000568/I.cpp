#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int fab_list[22];
  memset(fab_list, 0, 22);
  fab_list[0] = fab_list[1] = 1;
  for (int i = 2; i < 22; i++) {
    fab_list[i] = fab_list[i - 1] + fab_list[i - 2];
  }
  double sum = 0.0;
  for (int i = 1; i < 21; i++) {
    sum += 1.0 * fab_list[i + 1] / fab_list[i];
  }
  printf("%.6lf\n", sum);
  return 0;
}