#include<stdio.h>
void main()
{
  char c;
  printf("Enter the character :");
  scanf("%c",&c);
  switch(c)
  {
    case'a':
    case'A':printf("%c is a vowel",c);
    break;
    case'e':
    case'E':printf("%c is a vowel",c);
    break;
    case'i':
    case'I':printf("%c is a vowel",c);
    break;
    case'o':
    case'O':printf("%c is a vowel",c);
    break;
    case'u':
    case'U':printf("%c is a vowel",c);
    break;
    default:printf("%c is a consonant",c);
  }

}
