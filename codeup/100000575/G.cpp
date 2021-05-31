#include <iostream>
using namespace std;

int main() {
  int A[6], N, num, flag, A2_flag, A4_cnt;
  while (scanf("%d", &N) != EOF) {
    fill(A + 1, A + 6, 0);
    flag = 1, A2_flag = A4_cnt = 0;
    while (N--) {
      scanf("%d", &num);
      switch (num % 5) {
        case 0:
          if (num % 2 == 0) A[1] += num;
          break;
        case 1:
          A[2] += num * flag;
          flag *= -1;
          A2_flag = 1;
          break;
        case 2:
          A[3]++;
          break;
        case 3:
          A[4] += num;
          A4_cnt++;
          break;
        case 4:
          if (A[5] < num) A[5] = num;
          break;
        default:
          break;
      }
    }
    for (int i = 1; i < 6; i++) {
      switch (i) {
        case 1:
        case 3:
          if (A[i] == 0)
            printf("N ");
          else
            printf("%d ", A[i]);
          break;
        case 2:
          if (A2_flag == 0)
            printf("N ");
          else
            printf("%d ", A[i]);
          break;
        case 4:
          if (A[i] == 0)
            printf("N ");
          else
            printf("%.1lf ", A[i] * 1.0 / A4_cnt);
          break;
        case 5:
          if (A[i] == 0)
            printf("N\n");
          else
            printf("%d\n", A[i]);
          break;
        default:
          break;
      }
    }
  }

  return 0;
}