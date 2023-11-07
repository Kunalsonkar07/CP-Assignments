/* 	VIVEK KUMAR | 2023337 | D2
 *
 *  	QUES 4 : program to findthe revrerse of a number entered by the user(maximum digits of the nmbers is 7)
 *  	*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int num, temp,reverse,d,c;
        reverse = 0;	
	printf("enter the number (max digits can be 7 only)\n");
	scanf("%d",&num);
	temp = num;
	c=0;

	while(temp!=0)
	{
		c=c+1;
		temp=temp/10;
	}
	if(c>7)
	{
	printf("number  of digits = %d ",c);
	exit(1);
	}
	else
	{
		printf("number of digits =%d",c);
		temp = num;

		while(temp!=0)
		{
			d=temp%10;
			reverse = reverse*10 + d;
			temp/=10;
		}
		printf("reverse of the number = %d",reverse);	
	}
}
