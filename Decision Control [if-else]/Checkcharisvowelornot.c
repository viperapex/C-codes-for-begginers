#include <stdio.h>
int main()
{
  char c;
  printf("\nEnter the alphabet :  ");
  scanf("%c",&c);
  if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
//Used Logical 'OR'
  {
    printf("\n%c is vowel",c);
  }
  else
  {
    printf("\n%c is not vowel",c);
  }
}
