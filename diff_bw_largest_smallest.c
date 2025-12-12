// Find the difference between the maximum and minimum elements.
#include <stdio.h>
int main () {
	int size ; 
	
	printf("Input Array Size : "); 
	scanf("%d" ,&size); 
	
	int arr[size] ; 
	
	printf("Input Array Elements : \n"); 
	for(int i = 0 ; i < size ; i++) {
		scanf("%d" ,&arr[i]);
	}
	
	int smallest = arr[0]; 
	int largest = arr[0]; 
	
	for (int i=0 ; i < size ; i++) {
		if (smallest > arr[i]) {
			smallest = arr[i]; 
		}
		if (largest < arr[i]) {
			largest = arr[i]; 
		}
	}
	
	int diff = largest - smallest ; 
	
	printf("Difference between largest and smallest element is %d." ,diff);
	
	
	
	return 0; 
}