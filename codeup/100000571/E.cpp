#include <iostream>
using namespace std;

void my_input(int *list) {
  for (int i = 0; i < 10; i++) scanf("%d", &list[i]);
  return;
}

void deal_list(int *list) {
  int max_i, min_i, temp;
  max_i = min_i = 0;
  for (int i = 0; i < 10; i++) {
    if (list[max_i] < list[i]) max_i = i;
    if (list[min_i] > list[i]) min_i = i;
  }
  temp = list[min_i], list[min_i] = list[0], list[0] = temp;
  temp = list[max_i], list[max_i] = list[9], list[9] = temp;
  return;
}

void my_output(int *list) {
  for (int i = 0; i < 9; i++) printf("%d ", list[i]);
  printf("%d\n", list[9]);
  return;
}

int main() {
  int list[10];
  my_input(list);
  deal_list(list);
  my_output(list);
  return 0;
}