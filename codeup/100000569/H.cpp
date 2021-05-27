#include <iostream>
using namespace std;

int main() {
  int list[10], temp;
  for (int i = 0; i < 10; i++) scanf("%d", &list[i]);

  for (int i = 0; i < 9; i++)
    for (int j = i + 1; j < 10; j++)
      if (list[i] > list[j]) {
        temp = list[i];
        list[i] = list[j];
        list[j] = temp;
      }

  for (int i = 0; i < 10; i++) printf("%d\n", list[i]);
  return 0;
}