#include<stdio.h>
void main(){
	int arr[50];
	int size,i;
	int sum=0;
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("\nEnter the values in array:");
	for(i=0;i<size;i++){
		printf("\nvalue at %d: ",i);
		scanf("%d",&arr[i]);
	}
	printf("\nArray:");
	for(i=0; i< size; i++){
	    if(i !=9 ){
		printf("%d, ",arr[i]);
	    }
	    else{
	        printf("%d",arr[i]);
	    }
	}
	
	for(i=0;i<size;i++){
		sum = sum + arr[i];
	}
	printf("\nsum of all elements form array is:");
	printf("%d",sum);
	
}
