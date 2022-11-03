#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    double ci;
    ci=a*(pow((1+b/100.00),c));
    printf("%.2f",ci);
    
}