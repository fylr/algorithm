#include <iostream>
using namespace std;

struct student {
  int num;
  char name[20];
  int score1;
  int score2;
  int score3;
};

int main() {
  student list[10];
  int score1_sum, score2_sum, score3_sum, score_max_iter;
  score1_sum = score2_sum = score3_sum = score_max_iter = 0;

  for (int i = 0; i < 10; i++) {
    scanf("%d %s %d %d %d", &list[i].num, list[i].name, &list[i].score1,
          &list[i].score2, &list[i].score3);
    score1_sum += list[i].score1;
    score2_sum += list[i].score2;
    score3_sum += list[i].score3;
    if (list[score_max_iter].score1 + list[score_max_iter].score2 +
            list[score_max_iter].score3 <
        list[i].score1 + list[i].score2 + list[i].score3)
      score_max_iter = i;
  }

  printf("%.2lf %.2lf %.2lf\n", score1_sum / 10.0, score2_sum / 10.0,
         score3_sum / 10.0);
  printf("%d %s %d %d %d\n", list[score_max_iter].num,
         list[score_max_iter].name, list[score_max_iter].score1,
         list[score_max_iter].score2, list[score_max_iter].score3);

  return 0;
}