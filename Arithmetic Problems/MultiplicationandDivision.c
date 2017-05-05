#include <stdio.h>
void main()
{
  int x,y,mul;
  float div;
  printf("Enter Two Integers : ");
  scanf("%d%d",&x,&y);
  mul=x*y;
  div=x/y;

  printf("\nMultiplication=%d\nDivision=%f" ,mul,div);
}
