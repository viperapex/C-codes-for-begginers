#include<stdio.h>
void main()
{
  int i,sum=0;//sum containg garbage value
  for(i=1;i<=10;i++)
  {
    sum=i+sum;
  }
  printf("\nSum of first ten digit numbers =%d",sum);  
}
