#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  int integerValue; long longValue; char characterValue; float floatingValue; 
  double doubleValue;
  scanf("%d %ld %c %f %lf", &integerValue, &longValue, &characterValue, &floatingValue, &doubleValue);
  printf("%d\n%ld\n%c\n%f\n%lf\n", integerValue, longValue, characterValue, floatingValue, doubleValue);

  return 0;
}
