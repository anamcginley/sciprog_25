#include <stdio.h>
#include <math.h>

int main(){

	//declaring the variables where xo=a, x12 = b_deg, N is the number of intervals (12), a is the start value in degrees and b is the end value in degrees 	
	int N = 12, i; 
	float a = 0.0, b_deg = 60.0;
	float b_rad, area, mult_rad;

	//converting b_deg = pi/3 to radians
	b_rad = (M_PI * b_deg) / 180.0;
	printf("pi/3 in radians is %f \n", b_rad);

	//initialise the area as Sum tan(a) + tan(_radb)
	area = tan(a) + tan(b_rad);
	printf("the initial area: f(x0) + f(x12) = %f\n", area);
	
	//Calculate 2 * (f(x1) + f(x2) + ... + f(x11)) goes in increments of 5 degrees from 5 to 55
	for(i = 5; i < 60; i = i + 5) {
		area = area + 2 * tan((M_PI * i) / 180);
		printf("New area at x(%d) = %f\n", i/5, area);
	}

	//Multiply the area by (pi/3)/2*12
	mult_rad = (M_PI*((b_deg - a) / (2 * N))) / 180.0;
	area = mult_rad * area;
	
	//print the approximated result
	printf("\nTrapezoidal result: %f\n", area);

	//print the actual result
	printf("Real result: %f\n", log(2.0));

	return 0; 

}
