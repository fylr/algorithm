#include <iostream>
#include <string>
using namespace std;

int main() {
  char c;
  do {
    c = getchar();
    if ('a' <= c && c <= 'z')
      putchar('a' + 'z' - c);
    else if ('A' <= c && c <= 'Z')
      putchar('A' + 'Z' - c);
    else
      putchar(c);
  } while (c != '\n');

  return 0;
}