/*VIVEK KUMAR | D2 | 20233317
program find sum without using return staemnt*/
#include<stdio.h>
#include<math.h>

int SumAvg(int *a,int *b,float *sd,int num[])
{
  int i;
  int sum =0,sum1 =0;
  for(i =0;i<5;i++)
  {  
     sum = sum +num[i];
     sum1 = sum1 + pow(num[i],2);
  }
  *a=sum;
  *b=sum/5;
  *sd = pow(((sum1/5)-pow((sum/5),2)),0.5);

}

void main()
{
   int arr[5];
   printf("enter the 5 numbers");
   int i;
   for(i=0;i<5;i++)
   {  
    scanf("%d",&arr[i]);
   }
   int sum,avg;
   float stan_d;
   SumAvg(&sum,&avg,&stan_d,arr);
   
    printf("sum = %d \n avg = %d \n standard deviation = %f \n",sum,avg,stan_d);
}
     
      
