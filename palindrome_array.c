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
	
	int reverse[size]; 
	
	for(int i = 0 ; i <size ; i++) {
		reverse[i] = array[size - i - 1 ]; 
	}
	
	int ispalindrome = 1; 
	
	for(int i = 0 ; i<size ; i++) {
		if(reverse[i] != array[i]) {
			ispalindrome = 0 ;
		}
	}
	
	if(ispalindrome != 0 ){
		printf("Palindrome");
	}
	else {
		printf("Not palindrome");
	}
	
	
	
	return 0; 
}