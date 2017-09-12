#include<stdio.h>
void main()
{
  char c;
  printf("Enter the Alphabet :");
  scanf("%c",&c);
  if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' ) //used logical OR
  {
    printf("\n%c is vowel",c);
  }
  else
  {
  printf("\n%c is not a vowel",c);
  }
}
