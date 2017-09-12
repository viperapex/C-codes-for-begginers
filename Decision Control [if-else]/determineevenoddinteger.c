#include<stdio.h>
void main()
{
  int n=2;
  printf("Enter the number :");
  scanf("%d",&n);
  if(n%2==0)
  {
      printf("\n%d is Even Number",n);
  }
  else
  {
      printf("\n%d is Odd Number",n);
  }
}
