#include <cstring>
#include <iostream>
using namespace std;

struct student {
  char id[10];
  char name[100];
  char sex[5];
  int age;
} student_list[1020];

int main() {
  int N, M, i, j;

  while (scanf("%d", &N) != EOF) {
    for (i = 0; i < N; i++) {
      scanf("%s %s %s %d", student_list[i].id, student_list[i].name,
            student_list[i].sex, &student_list[i].age);
    }
    scanf("%d", &M);
    char id[10];
    for (i = 0; i < M; i++) {
      scanf("%s", id);
      for (j = 0; j < N; j++) {
        if (strcmp(id, student_list[j].id) == 0) break;
      }
      if (j < N)
        printf("%s %s %s %d\n", student_list[j].id, student_list[j].name,
               student_list[j].sex, student_list[j].age);
      else
        printf("No Answer!\n");
    }
  }

  return 0;
}
