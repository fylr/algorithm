#include <iostream>
using namespace std;

int main() {
  int L, M, tree_list[10002], a, b, sum;
  while (scanf("%d %d", &L, &M) != EOF) {
    if (L == 0 && M == 0) break;
    fill(tree_list, tree_list + L + 1, 1);
    while (M--) {
      scanf("%d %d", &a, &b);
      for (int i = a; i <= b; i++) tree_list[i] = 0;
    }
    sum = 0;
    for (int i = 0; i <= L; i++) sum += tree_list[i];
    printf("%d\n", sum);
  }
  return 0;
}