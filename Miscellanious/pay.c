#include<stdio.h>
void main()
{
int a,sno,basic,da,ta,hra,pf,gross,net,wa;
char name[25];
for(a=100;a<=1000;a++)
{
printf("*******_PAYMENT SLIP_*******\n");
printf("enter staff no:");
scanf("%d",&sno);
printf("enter name:");
scanf("%s",&name);
printf("enter basic:");
scanf("%d",&basic);
if(basic>=25000)
{
da=basic*.75;
ta=basic*.73;
hra=basic*.72;
wa=basic*.70;
pf=basic*.67;
}
else
if (basic>=15000)
{
da=basic*.72;
ta=basic*.70;
hra=basic*.65;
wa=basic*.63;
pf=basic*.62;
}
if(basic>5000)
{
da=basic*.65;
ta=basic*.60;
hra=basic*.56;
wa=basic*.52;
pf=basic*.50;
}
else
{
da=basic*.50;
ta=basic*.45;
hra=basic*.40;
wa=basic*.35;
pf=basic*.30;
}
gross=basic+da+ta+hra+pf+wa;
net=gross-pf;
printf("da=%d",da);
printf("\nta=%d",ta);
printf("\nhra=%d",hra);
printf("\nwa=%d",wa);
printf("\npf=%d",pf);
printf("\ngross=%d",gross);
printf("\nnet=%d\n",net);
}
}
