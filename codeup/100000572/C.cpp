#include <iostream>
using namespace std;

int main() {
  struct school_person {
    int num;
    char name[10];
    char sex;
    char job;
    union {
      int my_class;
      char position[10];
    } category;
  };

  school_person list[100];
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d %s %c %c", &list[i].num, list[i].name, &list[i].sex,
          &list[i].job);
    if (list[i].job == 's')
      scanf("%d", &list[i].category.my_class);
    else if (list[i].job == 't')
      scanf("%s", list[i].category.position);
  }

  for (int i = 0; i < n; i++) {
    printf("%d %s %c %c ", list[i].num, list[i].name, list[i].sex, list[i].job);
    if (list[i].job == 's')
      printf("%d\n", list[i].category.my_class);
    else if (list[i].job == 't')
      printf("%s\n", list[i].category.position);
  }

  return 0;
}