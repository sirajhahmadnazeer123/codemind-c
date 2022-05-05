#include<stdio.h>
int main()
{
    int a,sum=0,n,sq;
    scanf("%d",&a);
    sq=a*a;
    while(sq!=0)
    {
       n=sq%10;
        sum=sum+n;
        sq=sq/10;

    }
    if(sum==a)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}