#include <stdio.h>
#include <stdlib.h>

int main() {
  int list[10], temp;
  for (int i = 0; i < 9; i++) scanf("%d", &list[i]);
  scanf("%d", &temp);
  for (int i = 0; i < 9; i++) {
    if (temp > list[i])
      printf("%d\n", list[i]);
    else {
      printf("%d\n", temp);
      temp = i;
      break;
    }
  }
  for (int i = temp; i < 9; i++) printf("%d\n", list[i]);

  return 0;
}