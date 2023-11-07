/*VIVEK KUMAR | D2 | 20233317
program to find out gcd using division algorithm*/

#include<stdio.h>

int gcd(int,int);

void main()
{
    int num1, num2;
    printf("enter the numbers \n");
    scanf("%d %d",&num1,&num2);

    printf("gcd of the numbers = %d",gcd(num1,num2));
}

int gcd(int a , int b)
{
    if(a==0)
        return b;
    
    if(a>b)
        return gcd(a%b,b);
    else
        return gcd(b%a,a);
}