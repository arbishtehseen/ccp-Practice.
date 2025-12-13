#include <stdio.h>
int  main () {
	
	int size1; 
	
	printf("Input size of 1st array : "); 
	scanf("%d" ,&size1); 
	
	int arr1[size1]; 
	
	printf("Input 1st array's elemenrs : \n"); 
	for(int i = 0 ; i < size1 ; i++) {
		scanf("%d" ,&arr1[i]); 
	}
	
	int size2 ; 
	
	printf("Input size of 2nd array : "); 
	scanf("%d" ,&size2); 
	
	int arr2[size2]; 
	
	printf("Input 2nd array's elemenrs : \n"); 
	for(int i = 0 ; i < size2 ; i++) {
		scanf("%d" ,&arr2[i]); 
	}
	
	int size3 = size1+size2 ; 
	int merged[size3]; 
	
	for (int i = 0 ; i <size1 ; i++) {
		merged[i] = arr1[i]; 
	}
	
	for(int i = 0 ; i < size2 ; i++) {
		 merged[size1+i] = arr2[i]; 
	}
	
	printf("after merging:\n");
	for(int i = 0 ; i<size3 ; i++) {
		printf("%d " ,merged[i]);
	}
	return 0; 
}