#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char str[85];
  int N, n1, n2, mid_apd;
  while (scanf("%s", str) != EOF) {
    N = strlen(str);
    n1 = (N + 2) / 3;
    n2 = N + 2 - 2 * n1;
    mid_apd = n2 - 2;
    for (int i = 0; i < n1; i++) {
      if (i == n1 - 1) {
        for (int j = i; j < n1 + n2 - 1; j++) printf("%c", str[j]);
        printf("\n");
      } else {
        printf("%c", str[i]);
        for (int j = 0; j < mid_apd; j++) printf(" ");
        printf("%c\n", str[N - 1 - i]);
      }
    }
  }

  return 0;
}