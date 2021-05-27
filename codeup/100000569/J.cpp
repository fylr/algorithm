#include <iostream>
#include <string>
using namespace std;

int main() {
  string str1, str2, str3, str_max;
  cin >> str1 >> str2 >> str3;
  str_max = str1;
  if (str_max < str2) str_max = str2;
  if (str_max < str3) str_max = str3;

  cout << str_max << endl;
  return 0;
}