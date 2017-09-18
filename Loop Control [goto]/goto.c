#include<stdio.h>
void main()
{

    int n;
    ZERO:printf("\nEnter the number :");
        scanf("%d",&n);
        if(n==0)
        {
            goto ZERO;
        }
        printf("\nYou Entered %d",n);
}
