#include <iostream>
using namespace std;
int main() {
  struct student {
    int num;
    char name[20];
    char sex;
    int age;
  };

  student list[20];
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d %s %c %d", &list[i].num, list[i].name, &list[i].sex,
          &list[i].age);
  }
  student *temp;
  for (int i = 0; i < n; i++) {
    temp = list + i;
    printf("%d %s %c %d\n", temp->num, temp->name, temp->sex, temp->age);
  }
  return 0;
}