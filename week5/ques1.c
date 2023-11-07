/* VIVEK KUMAR | D2 | 20233317
 program to find out dm of digits using recursiv function*/

#include<stdio.h>

int digSum(int n)
{
        int sum = 0;
        if(n!=0)
        {
                sum=(n%10)+digSum(n/10);
        }
        return sum;
}


void main()
{
	int num;
	printf("enter a five digit number\n ");
	scanf("%d",&num);
	if(num<=99999 && num>9999)
	{
		printf("sum of digits  = %d",digSum(num));
	}
	else
	{
		printf("enter a valid number");
	}
}
	
