#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int a, b;
  float c, d; 
  scanf("%d %d", &a, &b);
  scanf("%f %f", &c, &d);

  int integerSum = a+b;
  int integerDiff = a-b;
  printf("%d %d\n", integerSum, integerDiff);

  float floatSum = c + d;
  float floatDiff = c - d;

  printf("%.1f %.1f", floatSum, floatDiff);

  return 0;
}

