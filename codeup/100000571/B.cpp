#include <iostream>
using namespace std;
void my_list(int* a, int* b, int* c) {
  int temp;
  if (*a < *b) {
    temp = *a;
    *a = *b;
    *b = temp;
  }
  if (*a < *c) {
    temp = *a;
    *a = *c;
    *c = temp;
  }
  if (*b < *c) {
    temp = *b;
    *b = *c;
    *c = temp;
  }
  return;
}
int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  my_list(&a, &b, &c);
  printf("%d %d %d\n", a, b, c);
  return 0;
}