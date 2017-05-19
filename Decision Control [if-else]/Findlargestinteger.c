#include <stdio.h>
int main()
{
  int x,y,z;
  printf("\nEnter the Integer :  ");
  scanf("%d%d%d",&x,&y,&z );
  if(x>y && x>z)
  {
    printf("\n%d is the greatest number",x);
  }
  else if(y>z)
  {
    printf("\n%d is the greatest number",y);
  }
  else
  {
    printf("\n%d is the greatest number",z);
  }
  return 0;
}
