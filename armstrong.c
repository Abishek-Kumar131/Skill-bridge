
#include <math.h>
#include <stdio.h>


int main() {
  int n, temp, digit, count = 0;
  int sum = 0;

  scanf("%d", &n);
  temp = n;

  int t = n;
  while (t != 0) {
    count++;
    t /= 10;
  }

  t = n;
  while (t != 0) {
    digit = t % 10;
    sum += pow(digit, count);
    t /= 10;
  }

  if (sum == temp)
    printf("Armstrong Number");
  else
    printf("Not an Armstrong Number");

  return 0;
}