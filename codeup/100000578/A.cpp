#include <iostream>
using namespace std;

int is_leap(int year) {
  return (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0);
}

int main() {
  int time1, time2, temp, date_dist;
  int month[13][2] = {{0, 0},   {31, 31}, {28, 29}, {31, 31}, {30, 30},
                      {31, 31}, {30, 30}, {31, 31}, {31, 31}, {30, 30},
                      {31, 31}, {30, 30}, {31, 31}};
  int year1, year2, month1, month2, day1, day2;
  while (scanf("%d%d", &time1, &time2) != EOF) {
    if (time1 > time2) {
      temp = time1;
      time1 = time2;
      time2 = temp;
    }
    year1 = time1 / 10000, year2 = time2 / 10000;
    month1 = time1 % 10000 / 100, month2 = time2 % 10000 / 100;
    day1 = time1 % 100, day2 = time2 % 100;

    date_dist = 1;
    while (year1 + 1 < year2) {
      date_dist += is_leap(year1) ? 366 : 365;
      year1++;
    }

    while (year1 < year2 || month1 < month2 || day1 < day2) {
      if (day1 == month[month1][is_leap(year1)]) {
        day1 = 1;
        if (month1 == 12) {
          month1 = 1;
          year1++;
        } else {
          month1++;
        }
      } else {
        day1++;
      }
      date_dist++;
    }
    printf("%d\n", date_dist);
  }

  return 0;
}