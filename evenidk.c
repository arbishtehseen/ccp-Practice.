#include <stdio.h>
int main () {
	int size ; 
	
	printf("Input array size : "); 
	scanf("%d" ,&size); 
	
	int arr[size]; 
	int pos_count = 0 ; 
	int neg_count = 0 ; 
	
	printf("Input array elements : \n"); 
	for(int i = 0 ; i <size ; i++) {
		scanf("%d" ,&arr[i]); 
		if (arr[i] > 0) {
			pos_count++; 
		}
		if (arr[i] < 0) {
			neg_count++; 
		}
	}
	
	int positive[pos_count]; 
	int neg[neg_count]; 
	int count1=0 , count2=0 ; 
	
	for(int i = 0 ; i < size ; i++) {
		if(arr[i] > 0) {
			count1++ ; 
			positive[count1-1] = arr[i];
		}
		if(arr[i] < 0) {
			count2++; 
			neg[count2-1] = arr[i]; 
		}
	}
	
	printf("Positives are : \n"); 
	for(int i = 0 ; i <pos_count ; i++) {
		printf("%d " ,positive[i]);
	}
	printf("\nNegatives are : \n"); 
	for(int i = 0 ; i <neg_count ; i++) {
		printf("%d " ,neg[i]);
	}
	return 0;
}