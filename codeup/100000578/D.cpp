#include <iostream>
using namespace std;

int days_in_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

class my_date {
 public:
  my_date(int y, int m, int d);
  void next_day_print();

 private:
  int _y;
  int _m;
  int _d;
};
my_date::my_date(int y, int m, int d) : _y(y), _m(m), _d(d) {}
void my_date::next_day_print() {
  if (days_in_month[_m] != _d) {
    _d++;
  } else {
    _d = 1;
    if (_m != 12) {
      _m++;
    } else {
      _m = 1;
      _y++;
    }
  }
  printf("%04d-%02d-%02d\n", _y, _m, _d);

  return;
}

int main() {
  int n, y, m, d;
  scanf("%d", &n);
  while (n--) {
    scanf("%d %d %d", &y, &m, &d);
    my_date md(y, m, d);
    md.next_day_print();
  }

  return 0;
}