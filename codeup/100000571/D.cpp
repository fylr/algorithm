#include <cstring>
#include <iostream>
using namespace std;

void my_cmp(char* str1, char* str2) {
  bool big_flag = false;
  for (int i = 0; str1[i] != '\n' && str2[i] != '\n'; i++) {
    if (str1[i] < str2[i]) {
      big_flag = false;
      break;
    } else if (str1[i] > str2[i]) {
      big_flag = true;
      break;
    }
  }
  char temp;
  for (int i = 0; big_flag && (str1[i] != '\0' || str2[i] != '\0'); i++) {
    temp = str1[i];
    str1[i] = str2[i];
    str2[i] = temp;
  }
  return;
}

int main() {
  char str1[21] = {'\0'}, str2[21] = {'\0'}, str3[21] = {'\0'};
  fgets(str1, 21, stdin);
  fgets(str2, 21, stdin);
  fgets(str3, 21, stdin);

  my_cmp(str1, str2);
  my_cmp(str1, str3);
  my_cmp(str2, str3);

  printf("%s", str1);
  printf("%s", str2);
  printf("%s", str3);
  return 0;
}