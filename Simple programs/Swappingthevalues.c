#include <stdio.h>
void main()
{
  int a,b,t;//Variable 't' for temporary use.
  printf("Enter values of 'A and 'B' = ");
  scanf("%d%d",&a,&b);
  t=a,
  a=b;
  b=t;
  printf("A=%d B =%d" ,a,b);
}
