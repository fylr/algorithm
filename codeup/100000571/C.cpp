#include <cstring>
#include <iostream>
using namespace std;
int main() {
  char *a = "I love China!";
  int n;
  scanf("%d", &n);
  a = a + n;
  printf("%s\n", a);
  return 0;
}