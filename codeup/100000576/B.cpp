#include <iostream>
using namespace std;

int main() {
  int N, M, iter, num_list[200];
  while (scanf("%d", &N) != EOF) {
    // fill(num_list, num_list + 200, 0);
    for (int i = 0; i < N; i++) scanf("%d", &num_list[i]);
    scanf("%d", &M);

    iter = -1;
    for (int i = 0; i < N; i++) {
      if (M == num_list[i]) {
        iter = i;
        break;
      }
    }
    printf("%d\n", iter);
  }

  return 0;
}