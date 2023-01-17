#include<stdio.h>
 void main(){
 	int arr[50];
 	int size,i;
 	printf("Input the number of elements to store in the array:");
 	scanf("%d",&size);
 	printf("\nInput %d number of elements in the array :",size);
 	for(i=0;i<size;i++){
 		printf("\nelement - %d : ",i);
 		scanf("%d", &arr[i]);
	}
	printf("\nThe values store into the array are : ");
	for(i=0;i<size;i++){
 		printf("%d",arr[i]);
	}
	printf("\nThe values store into the array(reverse order) are : ");
	for(i=size-1;i>=0;i--){
 		printf("%d",arr[i]);
	}
}
