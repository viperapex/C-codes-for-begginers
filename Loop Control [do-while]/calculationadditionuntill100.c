#include<stdio.h>
void main()
{

    int n,i=1,sum=0;
    do{
        printf("\nEnter the number :");
        scanf("%d",&n);
        sum=sum+n;
    }while(sum<100);
    printf("\nSum : %d ",sum);
}
