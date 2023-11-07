#include<stdio.h>

int sort(int a[],int size){
	int i=0;
	for (i=0;i<size-1;i++){
		int j=1;
		for(j=0;j<size;j++){
			if (a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int print(int a[],int b){
	int i=0;
	while(i<b){
		printf("%d " ,a[i]);
		i++;
	}
	printf("\n");
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
	// print(arr,size);
	sort(arr,size);
	int key;
	printf("Enter the number k :");
	scanf("%d",&key);
	printf("%d",arr[key-1]);
	
	//print(arr,size);
return 0;
}
