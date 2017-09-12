#include<stdio.h>
void main()
{
  int i,n,m;
  printf("\nEnter a number :");
  scanf("%d",&n);
  for(i=1;i<=10;i++)
  {
    m=i*n;
    printf("\n%d",m);
  }
}
