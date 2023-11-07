/* VIVEK KUMAR | D2 | 20233317
program to find out the digits of a nmber using non recursive funtion*/

#include<stdio.h>
#include<limits.h>
void main()
{
	int num,temp,dSum=0;
	printf("enter a five digit number to find out the sum of its digits\n");
	scanf("%d",&num);
	
	if(num<=99999 && num>9999)
	{
		temp = num;
		while(temp!=0)
		{
			dSum = dSum + temp%10;
			temp = temp/10;
		}
		printf("sum of digits  = %d \n",dSum);
	}
	else
	{
		printf("invalid number");
	}
}
