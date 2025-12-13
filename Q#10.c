// Count how many elements are greater than the average value.
#include <stdio.h>
int main () {
	int size ; 
	
	printf("Input array size : "); 
	scanf("%d" ,&size); 
	
	int arr[size]; 
	int sum = 0 ; 
	float average = 0.0 ; 
	
	printf("Input Array elements = \n"); 
	for(int i = 0 ; i < size ; i++) {
		scanf("%d" ,&arr[i]); 
		sum+=arr[i]; 
	}
	average = sum / size ; 
	int count = 0 ; 
	
	for ( int i = 0 ; i < size ; i++) {
		if(arr[i] > average) {
			count++ ;
			printf("Greater than average value: %d\n" ,arr[i]);
		}
	}
	printf("\n%d  values are greater than average value." ,count);
	return 0; 
}