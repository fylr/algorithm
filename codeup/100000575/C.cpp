#include <cstring>
#include <iostream>
using namespace std;

long str_to_num(char *str) {
  long num = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    num += str[i] - '0';
  }
  return num;
}

int main() {
  long a, b;
  char a_str[13], b_str[13];
  memset(a_str, '\0', 13);
  memset(b_str, '\0', 13);
  while (scanf("%s %s", a_str, b_str) != EOF) {
    printf("%ld\n", str_to_num(a_str) * str_to_num(b_str));
    memset(a_str, '\0', 13);
    memset(b_str, '\0', 13);
  }
  return 0;
}