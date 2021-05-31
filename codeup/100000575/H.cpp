#include <cstring>
#include <iostream>
using namespace std;
long get_Px(char* X, char Dx) {
  long num = 0;
  for (int i = 0; X[i] != '\0'; i++) {
    if (X[i] == Dx) num = num * 10 + Dx - '0';
  }
  return num;
}

int main() {
  char A[12], Da, B[12], Db;
  memset(A, '\0', 12);
  memset(B, '\0', 12);
  while (scanf("%s %c %s %c", A, &Da, B, &Db) != EOF) {
    printf("%ld\n", get_Px(A, Da) + get_Px(B, Db));
    memset(A, '\0', 12);
    memset(B, '\0', 12);
  }

  return 0;
}
