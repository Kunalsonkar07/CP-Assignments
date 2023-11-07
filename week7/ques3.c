
#include<stdio.h>

int positive(int a[],int size){
	int count=0;
	int i=0;
	while(i<size){
		if (a[i]>0){
		count++;
		}
	i++;
	}
	printf("the number of positive are %d\n",count);
}

int negative(int a[],int size){
	int count=0;
	int i=0;
	while(i<size){
		if (a[i]<0){
		count++;
		}
	i++;
	}
	printf("the number of negative are %d\n",count);
}

int evenodd(int a[],int size){
	int i=0;
	int count=0;
	int count1=0;
	while(i<size){
		if (a[i]%2==0 && a[i]>0){
			count++;
		}
		else if (a[i]%2!=0 && a[i]>0){
		
		count1++;
		}
		i++;
	}
	printf("the even number are %d\n",count);
	printf("the odd number are %d\n",count1);

}

int main(){
	int size;
	scanf("%d",&size);
	int arr[size];
	int i=0;
	while(i<size){
		scanf("%d",&arr[i]);
		i++;
	}
	positive(arr,size);
	negative(arr,size);
	evenodd(arr,size);

return 0;
}
