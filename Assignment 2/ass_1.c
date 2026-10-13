
#include <stdio.h>
#include <string.h>

int main() {
  char s[1000];
  int n, i, left, right;
  int start = 0, maxLen = 1, len;

  scanf("%999s", s);
  n = strlen(s);

  for (i = 0; i < n; i++) {
    left = i;
    right = i;

    while (left >= 0 && right < n && s[left] == s[right]) {
      len = right - left + 1;

      if (len > maxLen) {
        maxLen = len;
        start = left;
      }

      left--;
      right++;
    }

    left = i;
    right = i + 1;

    while (left >= 0 && right < n && s[left] == s[right]) {
      len = right - left + 1;

      if (len > maxLen) {
        maxLen = len;
        start = left;
      }

      left--;
      right++;
    }
  }

  for (i = start; i < start + maxLen; i++) {
    printf("%c", s[i]);
  }

  return 0;
}