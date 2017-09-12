#include<stdio.h>
void main()
{
  char c;
  printf("Enter your grade :");
  scanf("%c",&c);
  switch (c)
  {
    case 'a':
    case 'A':printf("Distinction");
    break;
    case 'b':
    case 'B':printf("First class");
    break;
    case 'c':
    case 'C':printf("You passed");
    break;
    case 'd':
    case 'D':printf("You failed");
    break;
  }
}
