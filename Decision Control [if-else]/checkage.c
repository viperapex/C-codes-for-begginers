#include<stdio.h>
void main()
{
  int age;
  printf("\nEnter your age :");
  scanf("%d",&age);
  if(age<13)
  {
    printf("You are child");
  }
  else if(age>13 && age<18)
  {
    printf("You are teenager");
  }
  else if(age>=18 && age<28)
  {
    printf("You are young adult");
  }
  else if(age>=28 && age<60)
  {
    printf("You are adult");
  }
  else if(age>=60 && age<110)
  {
    printf("You are old");
  }
  else
  {
    printf("You are not human");
  }
}
