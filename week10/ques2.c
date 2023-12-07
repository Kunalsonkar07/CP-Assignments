#include <stdio.h>

int isprime (int a){
    int i=2;
    while (i<a)
    {
        if (a%i==0) return 0;
        i++;
    }
    return 1;
}

void prime (int n){
    int a = n*n,count =0;
    int b = (n-1)*(n-1);
    for (int i = b+1; i < a; i++)
    {
        if (isprime(i)) {
            count ++;
            printf ("%d ", i);
        }
    }
    printf ("\nThere occurs %d prime numbers in between %d and %d\n",count,b,a);
    
}
 
int main()
{
    int num;
    printf ("Enter a natural number greater than 1 \n");
    scanf ("%d",&num);
    prime(num);
    return 0;
}