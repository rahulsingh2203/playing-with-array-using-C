#include<stdio.h>
#include<conio.h>
int main() {
	int arr[10];
	int i;
	printf("Input 10 elements in array:");
	for(i=0; i< 10; i++){
		printf("\nelement - %d : ",i);
		scanf("%d",&arr[i]);
	}
	printf("\n");
	printf("\nElements in array are:");
	for(i=0; i< 10; i++){
	    if(i !=9 ){
		printf("%d, ",arr[i]);
	    }
	    else{
	        printf("%d",arr[i]);
	    }
	}
}

