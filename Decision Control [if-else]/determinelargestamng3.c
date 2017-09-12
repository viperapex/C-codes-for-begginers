#include<stdio.h>
void main()
{
  int x,y,z;
  printf("\n Enter Three Integers :");
  scanf("%d%d%d",&x,&y,&z);
  if(x>y && x>z)
  {
    printf("%d is the Greatest number",x);
  }
  else if(y>z)
  {
    printf("%d is the Greatest number",y);
  }
  else
  {
    printf("%d is the Greatest number",z );
  }
}
