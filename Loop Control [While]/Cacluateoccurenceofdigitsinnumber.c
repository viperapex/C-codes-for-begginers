#include<stdio.h>
void main()
{
    int n,r,s,c=0;
    printf("Enter the numbers :");
    scanf("%d",&n);
    printf("Enter the digits to count :");
    scanf("%d",&s);
    while(n!=0)
    {
        r=n%10;
        if(r==s)
        {
            c++;
        }
        n=n/10;

    }
    printf("\n%d Occurs %d times",s,c);
}
