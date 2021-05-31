#include <iostream>
using namespace std;

int main() {
  int n, num, even_cnt, odd_cnt;
  while (scanf("%d", &n) != EOF) {
    even_cnt = odd_cnt = 0;
    while (n--) {
      scanf("%d", &num);
      if (num % 2)
        odd_cnt++;
      else
        even_cnt++;
    }
    if (even_cnt > odd_cnt)
      printf("NO\n");
    else
      printf("YES\n");
  }
  return 0;
}