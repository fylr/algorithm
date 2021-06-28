#include <iostream>
using namespace std;

int main() {
  int h, total_len, str_len;
  while (scanf("%d", &h) != EOF) {
    total_len = 3 * h - 2;
    for (int i = 0; i < h; i++) {
      str_len = h + 2 * i;
      for (int j = str_len; j < total_len; j++) printf(" ");
      for (int j = 0; j < str_len; j++) printf("*");
      printf("\n");
    }
  }

  return 0;
}