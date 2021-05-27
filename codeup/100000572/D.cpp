#include <iostream>
using namespace std;

struct student {
  int num;
  char name[20];
  int score1;
  int score2;
  int score3;
};

void my_input(student *list) {
  for (int i = 0; i < 5; i++)
    scanf("%d %s %d %d %d", &list[i].num, list[i].name, &list[i].score1,
          &list[i].score2, &list[i].score3);
  return;
}

void my_print(student *list) {
  for (int i = 0; i < 5; i++)
    printf("%d %s %d %d %d\n", list[i].num, list[i].name, list[i].score1,
           list[i].score2, list[i].score3);
  return;
}
int main() {
  student list[5];
  my_input(list);
  my_print(list);
  return 0;
}