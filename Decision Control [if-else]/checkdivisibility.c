#include<stdio.h>
void main()
{
  int n,div;
  printf("Enter the Number :");
  scanf("%d",&n);
  printf("Enter the Divisor :");
  scanf("%d",&div);
  if(n%div==0)
  {
  printf("%d is completely divisible by %d",n,div);
  }
  else
  {
  printf("%d is not completely divisible by %d",n,div);
  }
}
