#include <stdio.h>
int main () {
	int size ; 
	
	printf("Input size of an array : "); 
	scanf("%d" ,&size);
	
	int arr[size]; 
	int product = 1; 
	printf("Input array elements: \n"); 
	for(int i = 0 ; i < size ; i ++) {
		scanf("%d" ,&arr[i]); 
		product*=arr[i]; 
	}
	
	printf("Product of all elements = %d" ,product); 
	
	return 0 ; 
}