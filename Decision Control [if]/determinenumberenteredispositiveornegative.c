#include<stdio.h>
void main()
{
  int x;
  printf("Enter the number\n");
  scanf("%d",&x);
  if (x>0)
  {
  printf("\n%d is positive integer",x);
  }
  if(x<0)
  {
    printf("\n%d is Negative Integer",x);
  }
}
