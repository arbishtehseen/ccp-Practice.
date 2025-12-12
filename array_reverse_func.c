#include<stdio.h>

void reverse_array(int arr[] , int size); 

int main () {
      int size ; 
      
      printf("Input size of array : "); 
      scanf("%d" ,&size);
      
      int arr[size]; 
      
      printf("Input Array elements :\n"); 
      for (int i = 0 ; i < size ; i++) {
      	scanf("%d" ,&arr[i]); 
	  }
	  
	  printf("Input Array is : \n");
	  for(int i = 0 ; i < size ; i++) {
	  	printf("%d " ,arr[i]); 
	  }
	  
	  reverse_array(arr , size);
	  printf("\nReverse Array is : \n");
	  for(int i = 0 ; i < size ; i++) {
	  	printf("%d " ,arr[i]); 
	  }
	  
	return 0;
}

void reverse_array(int arr[] , int size) {
	int reverse[size]; 
	
	for (int i = 0 ; i < size ; i++) {
		reverse[i] = arr[size - i - 1];
	}
	
	for (int i = 0 ; i < size ; i++) {
		arr[i] = reverse[i];
	}
	return ;
}



