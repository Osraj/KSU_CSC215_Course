#include <stdio.h>
int main() {
	const double pi = 3.14;

	int r = 0;
	printf("Enter the radius: ");
	scanf("%d", &r);

	double perimeter = 2 * pi * r;
	double area = pi * r * r;

	printf("Perimeter of the Circle = %lf \n", perimeter);
	printf("Area of the Circle = %lf \n", area);

	return 0;
}

