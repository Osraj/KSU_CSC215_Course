#include <stdio.h>
#define _USE_MATH_DEFINES 
#include <math.h>

int main() {
	const double pi = M_PI;

	int r = 0;
	printf("Enter the radius: ");
	scanf("%d", &r);

	double perimeter = 2 * pi * r;
	double area = pi * r * r;

	printf("Perimeter of the Circle = %lf \n", perimeter);
	printf("Area of the Circle = %lf \n", area);

	return 0;
}

