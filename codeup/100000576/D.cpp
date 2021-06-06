#include <iostream>
using namespace std;

int main() {
  int N, M, i, j, num, num_list[102];

  while (scanf("%d", &N) != EOF) {
    for (i = 0; i < N; i++) {
      scanf("%d", &num_list[i]);
    }
    scanf("%d", &M);
    for (i = 0; i < M; i++) {
      scanf("%d", &num);
      for (j = 0; j < N; j++) {
        if (num == num_list[j]) break;
      }
      if (j < N)
        printf("YES\n");
      else
        printf("NO\n");
    }
  }

  return 0;
}
