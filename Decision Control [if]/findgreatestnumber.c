#include<stdio.h>
void main()
{
  int x,y;
  printf("Enter two numbers :");
  scanf("%d%d\n",&x,&y);
  if(x>y)
  {
      printf("\n%d is Greatest number",x);
  }
  if(x<y)
  {
      printf("\n%d is Greatest number",y);
  }
}
