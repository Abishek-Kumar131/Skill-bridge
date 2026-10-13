
#include <stdio.h>
#include <string.h>

int main() {
  char s[1000];
  int freq[256] = {0};
  int i;

  scanf("%999s", s);

  for (i = 0; s[i] != '\0'; i++) {
    freq[(unsigned char)s[i]]++;
  }

  for (i = 0; s[i] != '\0'; i++) {
    if (freq[(unsigned char)s[i]] == 1) {
      printf("%c", s[i]);
      return 0;
    }
  }

  printf("-1");

  return 0;
}