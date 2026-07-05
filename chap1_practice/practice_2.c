#include <stdio.h>

// Area of Square = side*side
int main()
{
  int side;
  int area;
  printf("enter the side:");
  scanf("%d", &side);
  area = side * side;
  printf("area is:%d", area);
  return 0;
}