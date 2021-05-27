#include <stdio.h>
#include <stdlib.h>

int main() {
  int list[11][11] = {0}, n, up, mid;
  list[1][1] = 1;
  scanf("%d", &n);

  for (int i = 2; i <= n; i++) {
    up = i + 1;
    mid = up / 2;
    for (int j = 1; j < up; j++) {
      if (j <= mid)
        list[i][j] = list[i - 1][j - 1] + list[i - 1][j];
      else
        list[i][j] = list[i][up - j];
    }
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j < i; j++) printf("%d ", list[i][j]);
    printf("%d\n", list[i][i]);
  }

  return 0;
}