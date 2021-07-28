#include <iostream>
using namespace std;

int days_in_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
  int M, y, m, d, n;
  scanf("%d", &M);
  while (M--) {
    scanf("%d %d %d %d", &y, &m, &d, &n);
    d += n;
    while (1) {
      if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0))
        days_in_month[2] = 29;
      else
        days_in_month[2] = 28;

      if (d > days_in_month[m]) {
        d -= days_in_month[m], m += 1;
        if (m > 12) m = 1, y += 1;
      } else
        break;
    }
    printf("%04d-%02d-%02d\n", y, m, d);
  }

  return 0;
}