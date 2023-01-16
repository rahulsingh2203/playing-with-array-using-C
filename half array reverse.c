#include<stdio.h>
#include<conio.h>
void main(){
	int arr[100],i,size;
	printf("Enter Size: \n");
	scanf("%d",&size);
	printf("Enter array elements:");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	for(i=size/2;i<size;i++){
		printf("%d",arr[i]);
	}
	for(i=0;i<size/2;i++){
		printf("%d",arr[i]);
	}
	
	getch();
}
