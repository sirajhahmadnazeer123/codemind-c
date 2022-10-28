#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    int c=a+b;
    if(a%2==0 && (a>0 || b%2==0))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}