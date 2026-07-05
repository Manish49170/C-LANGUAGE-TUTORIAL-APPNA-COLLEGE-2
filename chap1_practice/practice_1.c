#include <stdio.h>
// Area of circle = pi*r*r
int main()
{
  int radius;
  float pi = 3.14;
  printf("enter the radius:");
  scanf("%d", &radius);
  float area = 3.14 * radius * radius;
  printf("area is:%f", area);
  return 0;
}