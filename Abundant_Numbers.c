#include<stdio.h>
int main()
{
    int a,sum=0,i;
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            sum+=i;
        }
    }
    if(sum>a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}