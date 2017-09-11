#include<stdio.h>
void main()
{
    int num,sum,temp,r,a;

    //printf("enter a number :");
    //scanf("%d",&num);
    for(a=1;a<=1000;a++)
    {
    temp = a;
    num = a;
    sum=0;
    while(num>0)
    {
        r=num%10;
        sum=sum+(r*r*r);
        num=num/10;
    }

    if(temp==sum)
    {
        printf("\nThis is armstrong number :%d",sum);
    }
   // else
   //printf("\nThis is not an armstrong number :%d",num);
    }
    }




