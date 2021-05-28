#include <iostream>
using namespace std;

int main() {
  int N, M, num, sum;
  scanf("%d", &N);
  while (N--) {
    scanf("%d", &M);
    sum = 0;
    while (M--) {
      scanf("%d", &num);
      sum += num;
    }
    printf("%d\n", sum);
  }
  return 0;
}