#include <iostream>
using namespace std;

long dst_list[100005];
int main() {
  int N, M, num, a, b;
  long dst, deta_dst;
  while (scanf("%d", &N) != EOF) {
    fill(dst_list, dst_list + N + 1, 0);
    for (int i = 0; i < N; i++) {
      scanf("%d", &num);
      dst_list[i + 2] = dst_list[i + 1] + num;
    }
    scanf("%d", &M);
    while (M--) {
      scanf("%d %d", &a, &b);
      if (a < b)
        dst = dst_list[b] - dst_list[a];
      else
        dst = dst_list[a] - dst_list[b];
      deta_dst = dst_list[N + 1] - dst;
      if (dst > deta_dst) dst = deta_dst;
      printf("%ld\n", dst);
    }
  }
  return 0;
}