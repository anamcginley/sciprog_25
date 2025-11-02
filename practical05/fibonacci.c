#include <stdio.h>
#include <stdlib.h>

//Function prototype
//Input artguments: Fn - 1 and Fn - 2
//On exit Fn and Fn - 1

void fibonacci(int *a, int *b);

int main()
{

	int n, i;
	int f1 = 1, f0 = 0;

	//Ask user to enter a number
	printf("Enter a positive integer: \n");
	scanf("%d", &n);

	// Check that the number is positive
	if (n < 1){
		printf("The number is not positive\n");
		exit(1);
	}

	printf("Fibonacci sequence is: \n");
	printf("%d, %d", f0, f1);

	for (i = 2; i <= n; i++){
		fibonacci(&f1, &f0);
		printf("%d ", f1);
		if ((i + 1) % 10 == 0)
			printf("\n");
	}


	return 0;
}

void fibonacci(int *a, int *b){

	int next;
	//a = Fn -1, b = Fn -1
	next = *a + *b;

	//On exit *a = Fn *b = Fn -1
	*b = *a;
	*a = next;

}
