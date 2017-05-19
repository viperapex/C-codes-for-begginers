#include <stdio.h>
int main()
{
  int age;
  printf("\nEnter the age :  ");
  scanf("%d",&age);
  if(age<18)
  {
    printf("\nThe person is underage");
  }
  else if(age>=18 && age<60)
  {
    printf("\nThe person is an adult");
  }
  else if(age>=60 && age<=150)
  {
    printf("\nThe person is old");
  }
  else
  {
    printf("\nInvalid age");
  }
return 0;
}
