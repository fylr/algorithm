#include <iostream>
using namespace std;

int main() {
  long a, b, c, T;
  scanf("%ld", &T);
  for (int i = 1; i <= T; i++) {
    scanf("%ld %ld %ld", &a, &b, &c);
    if (a + b > c)
      printf("Case #%d: true\n", i);
    else
      printf("Case #%d: false\n", i);
  }
  return 0;
}