
#include <stdio.h>

int main() {
  char s[1000];
  int seen[256] = {0};
  int i;

  scanf("%999s", s);

  for (i = 0; s[i] != '\0'; i++) {
    unsigned char ch = s[i];

    if (seen[ch] == 0) {
      printf("%c", ch);
      seen[ch] = 1;
    }
  }

  return 0;
}