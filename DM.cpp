#include<stdio.h>
#include<stdlib.h>

int main() {
	printf("#########\t DYNAMIC MEMORY ALLOCATION \t###########\n");
	printf("+++++++++\t malloc() Demonstration \t+++++++++++\n");
//	Malloc allocates memory but does not initialize it (contains garbage value)
	int n;
	int *ptr;
	printf("\n\n\nEnter a number of values : ");
	scanf("%d", &n);
	
//	ptr = (int*) malloc(n *sizeof(int));    // Static memory is pointing out the Heap memory.

	ptr = (int*) calloc(n, sizeof(int));

	printf("\n VALUES Before Assigning \n"); // Initially our dynamic memory has agarbage value.
	
	for (int i = 0; i < n; i++){
		printf("\nptr[%d] = %d", i+1, *(ptr + i));
	 }
	
	int arr[n];
	
	for (int j = 0; j<n; j++){
		printf("\n\nEnter values for ptr[%d] : ", j+1);
		scanf("%d", (ptr + j));
	}
	
	for (int i = 0; i < n; i++){
		printf("\nptr[%d] = %d", i+1, *(ptr + i));
	 }
	
	 
	
	
	
	return 0;
}
