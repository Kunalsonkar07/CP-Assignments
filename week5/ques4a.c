/* VIVEK KUMAR | D2 | 20233317
program to fing GCD using naive approach*/

#include<stdio.h>
void main()
{
    int gcd =1,num1,num2,i;
    printf("enter the numbers");
    scanf("%d %d",&num1,&num2);
    
    if(num1<num2)
    {
        for(i=1;i<=num1;i++)
        {
            if(num1%i==0 && num2%i==0)
            {
                gcd = i;
            }
        }
    }
    else
    {
        for(i=1;i<=num2;i++)
        {
            if(num1%i==0 && num2%i==0)
            {
                gcd = i;
            }
        }
    }
    printf("gcd = %d",gcd);
    }

