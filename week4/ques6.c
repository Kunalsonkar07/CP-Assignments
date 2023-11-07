/* 	VIVEK KUMAR | 2023337 | D2
 *
 *  	QUES 6 : program to find the nth fibonacci number
 *  	*/

#include<stdio.h>

void main()
{
    int n,term,a=0,b=1;
    printf("enter the vale of the n");
    scanf("%d",&n);

    if(n==1)
        printf("%d\n",a);
    else if(n==2)
        printf("%d\n",b);
    else
    {
        int i = 3;
        for( ;i<=n;i++)
        {
            term=a+b;
            a=b;
            b=term;
             
        }
        printf("%d",term);
    }


}