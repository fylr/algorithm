#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char str1[100], str2[100];
  fgets(str1, 100, stdin);
  fgets(str2, 100, stdin);

  int i = 0;
  for (; str1[i] != '\0' && str2[i] != '\0'; i++) {
    if (str1[i] < str2[i]) {
      printf("%d\n", str1[i] - str2[i]);
      break;
    } else if (str1[i] > str2[i]) {
      printf("%d\n", str1[i] - str2[i]);
      break;
    }
  }
  if (str1[i] == '\0' || str2[i] == '\0') printf("0\n");
  return 0;
}