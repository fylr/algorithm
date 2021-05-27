#include <iostream>
#include <string>

using namespace std;
string my_reverse(string in_str) {
  int len = in_str.length();
  string out_str = "";
  for (int i = 0; i < len; i++) out_str = in_str[i] + out_str;
  return out_str;
}
int main() {
  string in_str;
  cin >> in_str;
  cout << my_reverse(in_str) << endl;
  return 0;
}