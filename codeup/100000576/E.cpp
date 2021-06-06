#include <cstring>
#include <iostream>
using namespace std;

struct student {
  int id;
  char name[100];
  char sex[5];
  int age;
} student_list[20];

int main() {
  int N, M, id;

  scanf("%d", &M);
  while (M--) {
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
      scanf("%d %s %s %d", &student_list[i].id, student_list[i].name,
            student_list[i].sex, &student_list[i].age);

    scanf("%d", &id);
    for (int i = 0; i < N; i++) {
      if (id == student_list[i].id) {
        printf("%d %s %s %d\n", student_list[i].id, student_list[i].name,
               student_list[i].sex, student_list[i].age);
        break;
      }
    }
  }

  return 0;
}
