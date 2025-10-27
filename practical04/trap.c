#include <stdio.h>
#include <math.h>

float degtorad(float degang);	//converting degrees to radians 
float traprule(int N, float TanArr[N + 1]);	//gives result of trapezoidal rule

int main(void){
	//N is the number of intervals (12) and TanArr[N + 1] is the array of the tan(rad) stored
	int N = 12, i;
	float TanArr[N + 1], deg, rad, area;

	//f(xi) at xi where i = 0, ..., 12
	for(i = 0; i <= N; i++){
		deg = i * 5.0;
		rad = degtorad(deg);
		TanArr[i] = tan(rad);
		printf("TanArr[%d] = %f\n", i, TanArr[i]);
	}

	//use the traprule
	area = traprule(N, TanArr);
	
	//show the results of the trap rule vs actual
	printf("\n Trapezodial result: %f  \n", area);

	printf("Real result: %f\n", log(2.0));

	return 0;
}

float degtorad(float degang){
	return((M_PI * degang) / 180.0);
}

float traprule(int N, float TanArr[N + 1]){
	float area;
	int i;

	area = TanArr[0] + TanArr[N];
	for(i = 1; i < N; i++){
		area = area + 2.0 * TanArr[i];
	}

	//convert to radians
	float mult_rad = degtorad((60.0 - 0.0)/(2 * N));
	area = mult_rad * area;

		return area;
}

