#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,d,temp,sum=0;
    scanf("%d",&n);
    temp=n;
    d=(int)log10(n)+1;
    while(n>0)
    {
        r=n%10;
        sum=sum+pow(r,d);
        n=n/10;
        d--;
    }
    if(sum==temp)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}