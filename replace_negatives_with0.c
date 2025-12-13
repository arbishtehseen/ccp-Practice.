#include <stdio.h> 
int main () {
	int size ; 
	
	printf("Input size of an array : "); 
	scanf("%d" ,&size);
	
	int arr[size]; 
	
	printf("Input array elements: \n"); 
	for(int i = 0 ; i < size ; i ++) {
		scanf("%d" ,&arr[i]); 
		if(arr[i] < 0 ) {
			arr[i] = 0 ; 
		}
	}
	
	printf("Resultant array is : \n"); 
	for(int i = 0 ; i < size ; i++) {
		printf("%d " ,arr[i]); 
	}
	return 0; 
}