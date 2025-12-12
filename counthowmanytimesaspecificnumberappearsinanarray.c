#include <stdio.h>
int main () {
	int size ; 
	
	printf("Input Array Size : "); 
	scanf("%d" ,&size); 
	
	int array[size];
	
	printf("Input Array elements : \n"); 
	for(int i = 0 ; i<size ; i++) {
		scanf("%d" ,&array[i]); 
	}
	
	int visited[7] = {0};
	
	
    for (int i = 0 ; i < size ; i++) { 
    
			if (visited[i] == 0 ) {
				int count = 1; 
				
				for (int j= i+1 ; j < size ; j++) {
					if ( visited[j] == 0 && array[i] == array[j]) {
						count++; 
					}
					visited[j] = 1; 
				}
				
				printf("%d appears %d times\n" ,array[i] ,count);
				visited[i] = 1; 
			}
       	}
	return 0; 
}