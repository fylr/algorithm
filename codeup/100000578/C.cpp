#include <iostream>
using namespace std;

int main() {
  int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int y, n, m, d;
  while (scanf("%d %d", &y, &n) != EOF) {
    if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0))
      days_in_month[1] = 29;
    else
      days_in_month[1] = 28;
    for (int i = 0; i < 12; i++) {
      if (n > days_in_month[i])
        n -= days_in_month[i];
      else {
        m = i + 1, d = n;
        break;
      }
    }
    printf("%04d-%02d-%02d\n", y, m, d);
  }

  return 0;
}