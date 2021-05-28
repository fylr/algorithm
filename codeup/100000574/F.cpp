#include <iostream>
using namespace std;

int main() {
  int N, num, sum;
  while (scanf("%d", &N) != EOF) {
    sum = 0;
    while (N--) {
      scanf("%d", &num);
      sum += num;
    }
    printf("%d\n", sum);
  }

  return 0;
}