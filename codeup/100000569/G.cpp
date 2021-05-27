#include <iostream>
using namespace std;

int main() {
  int fib_list[20] = {1, 1};
  for (int i = 2; i < 20; i++) fib_list[i] = fib_list[i - 1] + fib_list[i - 2];
  for (int i = 0; i < 20; i++) printf("%d\n", fib_list[i]);
  return 0;
}