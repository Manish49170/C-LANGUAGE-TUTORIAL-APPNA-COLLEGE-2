#include<stdio.h>
// perimeter of rectangle
int main()
{
  int a,b,perimeter;
  printf("enter the number of a:");
  scanf("%d",&a);
  printf("enter the number of b:");
  scanf("%d",&b);
  perimeter = 2*(a+b);
  printf("perimeter of rectangle is %d",perimeter);
  return 0;
}