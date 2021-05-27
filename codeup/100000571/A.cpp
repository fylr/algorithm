#include <iostream>
using namespace std;
int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  int *p1 = &a, *p2 = &b;
  if (*p1 < *p2)
    printf("%d %d\n", *p2, *p1);
  else
    printf("%d %d\n", *p1, *p2);

  return 0;
}