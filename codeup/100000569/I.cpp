#include <iostream>
using namespace std;

int main() {
  int in_mutex[2][3] = {0}, out_mutex[3][2] = {0};
  for (int i = 0; i < 2; i++)
    for (int j = 0; j < 3; j++) scanf("%d", &in_mutex[i][j]);

  for (int i = 0; i < 2; i++)
    for (int j = 0; j < 3; j++) out_mutex[j][i] = in_mutex[i][j];

  for (int i = 0; i < 3; i++)
    printf("%d %d\n", out_mutex[i][0], out_mutex[i][1]);

  return 0;
}