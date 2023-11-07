/* VIVEK KUMAR | 20233317 | D2
 *
 * QUES 2 : program to print the factorial of a number entered by the user */

#include<stdio.h>
void main()
{
	int num;
	printf("enter the number\n ");
	scanf("%d",&num);
	
	int i;
	unsigned long long int fact=1;
	if(num>=0)
	{
		for(i=1;i<=num;i++)
		{
			fact = fact *i;
		}
		printf("the factorial is= %llu ",fact);
	}
	else
	{
		printf("enter a valid number");
	}
}
		
