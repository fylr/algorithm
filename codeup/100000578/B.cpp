#include <cstring>
#include <iostream>

using namespace std;

const char months[13][20] = {
    "",     "January", "February",  "March",   "April",    "May",     "June",
    "July", "August",  "September", "October", "November", "December"};

const char weekday[7][15] = {"Sunday",   "Monday", "Tuesday", "Wednesday",
                             "Thursday", "Friday", "Saturday"};

int main() {
  int d, M, y, w;
  char month[15];
  while (scanf("%d %s %d", &d, month, &y) != EOF) {
    for (int i = 0; i < 13; i++) {
      if (strcmp(months[i], month) == 0) {
        M = i;
        break;
      }
    }
    if (M == 1 || M == 2) M += 12, y--;

    // 基姆拉尔森计算公式
    w = (d + 2 * M + 3 * (M + 1) / 5 + y + y / 4 - y / 100 + y / 400 + 1) % 7;
    printf("%s\n", weekday[w]);
  }

  return 0;
}