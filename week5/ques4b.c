/*VIVEK KUMAR | D2 | 20233317
    program to find gcd using subtraction algo*/

#include<stdio.h>
int gcd(int,int);

void main()
{
    int num1, num2;
    printf("enter the numbers \n");
    scanf("%d %d",&num1,&num2);

    printf("gcd of the numbers = %d",gcd(num1,num2));
}

int gcd(int m, int n)
{
    if(n==0)
        return m;
    if(m==0)
        return n;
    if(m==n)
        return m;
    if(m>n)
        return gcd(m-n,n);
    else
        return gcd(m,n-m);
}

/*      ALTERNATE CODE

int min(int a, int b)
{
    if(a<b)
        return a;
    else
        return b;
}
int max(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}


int gcd(int m, int n)
{
    int l;
    l=max(m,n)-min(m,n);
    if(l==0)
        return m;
    else
        gcd(l,min(m,n))
}*/