#include <iostream>
using namespace std;

int main() {
  int N, M, score, score_list[101];
  while (scanf("%d", &N) != EOF && N != 0) {
    fill(score_list, score_list + 101, 0);
    while (N--) {
      scanf("%d", &score);
      score_list[score]++;
    }
    scanf("%d", &M);
    printf("%d\n", score_list[M]);
  }

  return 0;
}