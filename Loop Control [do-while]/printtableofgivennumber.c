#include<stdio.h>
void main()
{
    int n,i=1,m;
    printf("\nEnter a number :");
    scanf("%d",&n);
    printf("\nMultiplication table of %d :",n);
    do{
        m=n*i;
        printf("\n%d",m);
        i++;
    }while(i<=10);
}
