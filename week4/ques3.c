/* VIVEK KUMAR | 20233317 | D2
 *
 * QUES 3 :	PROGRAM to find number raised to power if another number(with out using pow() fucntion
 * */
#include<stdio.h>
void main()
{
	int num1 , num2,i;
        long result = 1;

	printf(" enter the nunmbers \n");
	scanf("%d %d",&num1,&num2);
	
	for(i=1;i<=num2;i++)
	{
		result = result*num1;
	}
	printf("%d",num1); printf(" raised to power %d",num2);printf(" = %ld ",result);
}
		
