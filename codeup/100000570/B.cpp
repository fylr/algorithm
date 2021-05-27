#include <cstring>
#include <iostream>
using namespace std;
void vowels(char s1[], char s2[]) {
  int cnt = 0;
  for (int i = 0; s1[i] != '\0'; i++) switch (s1[i]) {
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
        s2[cnt++] = s1[i];
        break;
      default:
        break;
    }
  return;
}
int main() {
  char s1[100], s2[100];
  memset(s1, 0, 100);
  memset(s2, 0, 100);
  fgets(s1, 100, stdin);
  vowels(s1, s2);
  printf("%s\n", s2);
  return 0;
}