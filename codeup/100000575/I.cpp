#include <iostream>
using namespace std;

char get_max_win_key(int *list) {
  int max_win_id = 0;
  char max_win_key[3] = {'B', 'C', 'J'};
  for (int i = 1; i < 3; i++) {
    if (list[i] > list[max_win_id]) max_win_id = i;
  }
  return max_win_key[max_win_id];
}
int main() {
  int N, A_list[3] = {0}, A_win_list[3] = {0}, B_win_list[3] = {0};
  char a, b;
  scanf("%d", &N);
  getchar();
  while (N--) {
    scanf("%c %c", &a, &b);
    getchar();
    if (a == 'B') {
      if (b == 'B')
        A_list[1] += 1;
      else if (b == 'C')
        A_list[0] += 1, A_win_list[0] += 1;
      else if (b == 'J')
        A_list[2] += 1, B_win_list[2] += 1;
    } else if (a == 'C') {
      if (b == 'B')
        A_list[2] += 1, B_win_list[0] += 1;
      else if (b == 'C')
        A_list[1] += 1;
      else if (b == 'J')
        A_list[0] += 1, A_win_list[1] += 1;
    } else if (a == 'J') {
      if (b == 'B')
        A_list[0] += 1, A_win_list[2] += 1;
      else if (b == 'C')
        A_list[2] += 1, B_win_list[1] += 1;
      else if (b == 'J')
        A_list[1] += 1;
    }
  }

  printf("%d %d %d\n", A_list[0], A_list[1], A_list[2]);
  printf("%d %d %d\n", A_list[2], A_list[1], A_list[0]);
  printf("%c %c\n", get_max_win_key(A_win_list), get_max_win_key(B_win_list));

  return 0;
}