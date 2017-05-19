#include <stdio.h>
int main()
{
  int m;
  printf("\nEnter the marks: ");
  scanf("%d",&m);
  if(m<40)
  {
    printf("\nFailed");
  }
  else if(m>=40 && m<60)
  {
    printf("\nPass");
  }
  else if(m>=60 && m<=80)
  {
   printf("\nFirst class");
  }
  else if(m>=80 && m<=100)
  {
    printf("\nDistinction");
  }
  else
  {
    printf("\nInvalid marks input");
  }
  return 0;
}
