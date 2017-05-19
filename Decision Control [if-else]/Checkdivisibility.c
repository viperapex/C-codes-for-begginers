#include <stdio.h>
int main()
{
  int n,div;
  printf("\nEnter the number :  ");
  scanf("%d",&n);
  printf("\nEnter the divisor :  ");
  scanf("%d",&div);
  if(n%div==0)
  {
    printf("\n%d is completely divisible by %d",n,div);
  }
  else
  {
    printf("\n%d is not divisible by %d",n,div);
  }
}
