#include<stdio.h>
void main()
{
	int arr[16],i=0,j,sum1=0,sum2=0;
	long num,temp;

	printf("enter he credit card number\n");
	scanf("%ld",&num);
 	temp = num;

	while(temp!=0)
	{
		arr[i]=temp%10;
		temp =temp/10;
		i++;
	}
	
	for(i=1,j=0;i<16,j<16;i=i+2,j=j+2)
	{
		arr[i]=arr[i]*2;
		if(arr[i]>=10)
		{arr[i]=arr[i]-9;}
		sum1 =sum1+arr[j];
		sum2=sum2+arr[i];
	}
	if((sum1+sum2)%10)
	{
		printf("valid card number\n");
	}
	else
	{
		printf("invlid card number\n");
	}

}
		
