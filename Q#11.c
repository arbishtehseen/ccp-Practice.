// Create an array of n integers and separate positive and negative numbers.
#include <stdio.h> 
int main () {
	int size ;
	
	printf("Input size");
	scanf("%d" ,&size); 
	
	int array[size];  
	
	printf("Input array elements = "); 
	for(int i = 0 ; i< size ; i++) {
		scanf("%d" ,&array[i]); 
	}
	
	// printing all positive numbers.
	for (int i = 0 ; i < size ; i++) {
		if (array[i] > 0 ) {
			printf("%d " , array[i]); 
		}
	}
	
	printf("\n"); 
	
	// printing all negative numbers.
	for(int i = 0 ; i < size ; i++) {
		if (array[i] < 0 ) {
			printf("%d " ,array[i]);
		}
	}
		
	return 0; 
}