#include<stdio.h>
void main(){
	int arr1[50],arr2[50];
	int size,i;
	printf("Input the number of elements to be stored in the array :");
	scanf("%d",&size);
	printf("Input %d elements in the array :",size);
	for(i=0;i<size;i++){
		printf("\nvalue at %d: ",i);
		scanf("%d",&arr1[i]);
	}
	printf("\nElement stored in first array are:");
	for(i=0;i<size;i++){
		printf("%d",arr1[i]);
	}
	printf("\nElement stored in second array are:");
	for(i=0;i<size;i++){
		arr2[i]= arr1[i];
	}
	for(i=0;i<size;i++){
		printf("%d",arr2[i]);
	}	
}
