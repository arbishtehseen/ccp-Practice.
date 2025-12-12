#include <stdio.h>
int main () {
	int size ; 
	
	printf("Input size of an array : "); 
	scanf("%d" ,&size);
	
	int arr[size]; 
	
	printf("Input array elements: \n"); 
	for(int i = 0 ; i < size ; i ++) {
		scanf("%d" ,&arr[i]); 
	}
	
	printf("Elements at even indices:\n"); 
	for( int i = 0 ; i < size ; i++) {
		if(i % 2 == 0 ) {
			printf("%d " ,arr[i]);
		}
	}
	
	return 0;
}