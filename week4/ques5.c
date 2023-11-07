/* 	VIVEK KUMAR | 2023337 | D2
 *
 *  	QUES 5 : program to find all the prime numbers between 1 to 100.
 *  	*/

#include<stdio.h>

void prime(int n)
{
    int i,c=0;
    for(i = 2; i<n; i++)
    {
        if(n%i==0)
        {
           c++;
           break; 
        }
    }
    if(c==0)
        printf("%d\n",n);
    
}
void main()
{
    int j;
    for(j=1;j<=100;j++)
    {
        prime(j);
    }
}