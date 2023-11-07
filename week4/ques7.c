/* 	VIVEK KUMAR | 2023337 | D2
 *
 *  	QUES 7 : menu driven program
 *  	*/

#include<stdio.h>
#include<stdbool.h>

int factorial(int n)
{
    
    int fact;
    if(n==0)
        return 1;
    else
    {
        fact = n * factorial(n-1);
    }
    return fact;
        
}

bool isPrime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i == 0||n==1)
        {
            return false;
        }
    }
    return true;

}



void main()
{
    int n;
    int num;    

    while(n!=4)
    {
        printf("enter \n 1 : to get factorial of a number \n 2 : to check prime \n 3: to check even or odd \n ");
        printf("enter yout choice %d \n",n);
        scanf("%d",&n);
        switch(n)
    {  
        case 1: 
                printf("enter a number \n");
                scanf("%d",&num);
                int i = factorial(num);
                printf("%d\n",i);
                break;
        case 2:
                printf("enter the number \n");
                scanf("%d",&num);
                if(isPrime(num))
                    printf("prime number\n");
                else
                    printf("not prime\n");
                
                break;
        case 3:
                printf("enter the number \n");
                scanf("%d",&num);

                if(num %2 == 0)
                    printf("the number is even\n ");
                else
                    printf("the number is odd\n");
                
                break;             


    }
    }
    printf("user entered 4 so exit");
}