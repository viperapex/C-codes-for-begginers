#include <stdio.h>
void main()
{
  int years;
  float amount,rate,interest;
  printf("Enter Principle Amount :");
  scanf("%f",&rate);
  printf("Enter rate of interest:");
  scanf("%f",&rate);
  printf("Enter Period in Years :");
  scanf("%d",&years);interest=(amount*rate*years)/100;
  printf("\nSimple Interest = %f",interest);
}
