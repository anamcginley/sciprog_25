#include <stdio.h>
#include <stdlib.h>

//Allocate array
int *allocate_array(int n){
	int *p;
	p = (int *) malloc(n * sizeof(int));
	return p;
}

//Fill with 1s
void fill_with_ones(int *array, int n){
	int i;
	for (i = 0; i < n; i++){
		array[i] = 1;
	}
}

//Print the array
void print_array(int *array, int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("a[%d]: %d \n", i, array[i]);
	}
}

//Deallocate the array
void free_array(int *array) {
	free(array);
}

int main(){
	int n, *a;

	printf("Size of array: \n");
	scanf("%d", &n);

	a = allocate_array(n);
	fill_with_ones(a, n);
	print_array(a, n);
	free_array(a);

	a = NULL;
	
	return 0;

}




