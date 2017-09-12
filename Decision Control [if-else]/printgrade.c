#include<stdio.h>
void main()
{
  float eng,phy,chem,bio,math,avg;

  E:printf("Enter English score :");
  scanf("%f",&eng);
  if(eng>100)
  {
    printf("Try again  ");
    goto E;
  }
  P:printf("Enter Physics score :");
  scanf("%f",&phy);
  if(phy>100)
  {
    printf("Try again  ");
    goto P;
  }
  C:printf("Enter Chemistry score :");
  scanf("%f",&chem);
  if(chem>100)
  {
    printf("Try again  ");
    goto C;
  }
  B:printf("Enter Biology score :");
  scanf("%f",&bio);
  if(bio>100)
  {
    printf("Try again  ");
    goto B;
  }
  M:printf("Enter Math score :");
  scanf("%f",&math);
  if(math>100)
  {
    printf("Try again  ");
    goto M;
  }
  avg=(eng+phy+chem+bio+math+avg)/5;
  printf("Your average score is %f \n",avg);
  if(avg<40)
  {
    printf("You failed");
  }
  else if(avg>=40 && avg<50)
  {
    printf("Awarded D grade");
  }
  else if(avg>=50 && avg<60)
  {
    printf("Awarded D grade");
  }
  else if(avg>=60 && avg<70)
  {
    printf("Awarded C grade");
  }
  else if(avg>=70 && avg<80)
  {
    printf("Awarded B grade");
  }
  else if(avg>=80 && avg<90)
  {
    printf("Awarded A grade");
  }
  else
  {
    printf("Awarded A+ grade");
  }
}
