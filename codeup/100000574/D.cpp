#include <iostream>
using namespace std;

int main() {
  int n, num, sum;
  while (scanf("%d", &n) != EOF) {
    if (n == 0) break;
    sum = 0;
    while (n--) {
      scanf("%d", &num);
      sum += num;
    }
    printf("%d\n", sum);
  }
  return 0;
}