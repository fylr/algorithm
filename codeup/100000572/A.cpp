#include <cstring>
#include <iostream>
using namespace std;
struct person {
  char name[20];
  int count;
} leader[3] = {"Li", 0, "Zhang", 0, "Fun", 0};
int main() {
  int n;
  char name[20];
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%s", name);
    for (int i = 0; i < 3; i++)
      if (!strcmp(name, leader[i].name)) leader[i].count++;
  }
  for (int i = 0; i < 3; i++)
    printf("%s:%d\n", leader[i].name, leader[i].count);
  return 0;
}