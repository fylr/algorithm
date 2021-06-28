#include <iostream>
using namespace std;

int main() {
  int m, h, blk_len, str_len;
  scanf("%d", &m);
  while (m--) {
    scanf("%d", &h);
    for (int i = 0; i < h; i++) {
      blk_len = h - 1 - i;
      str_len = h + 2 * i;
      for (int j = 0; j < blk_len; j++) printf(" ");
      for (int j = 0; j < str_len; j++) printf("*");
      for (int j = 0; j < blk_len; j++) printf(" ");
      printf("\n");
    }
  }

  return 0;
}