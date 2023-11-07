/*VIVEK KUMAR | D2 | 20233317 
program to find prime factors of a number entered by the user Uusing recursive funtion*/

#include<stdio.h>
int i = 2;
int primFac(int);

void main()
{
	int i, num, temp;
	printf("enter the number \n");
	scanf("%d",&num);
	
	printf("prime factors are\n");
	primFac(num);
}
int primFac(int n)
{
	
	if(n==1 || n==0)
	{ return 0; //terminate the recursive call 
	}
	if(n%i==0)
	{
		printf("%d\n",i);
		primFac(n/i);
	}
	else
	{i++; primFac(n);
	}
	}

