#include <stdio.h>
int main()
{
  int n=2;
  printf("Enter The Number: ");
  scanf("%d",&n);
  if(n%2==0)
  {
    printf("\n%d is Even Number",n);
  }
  else
  {
    printf("\n%d is Odd Niumber",n);
  }
}
