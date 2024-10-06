#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	const double PI = 3.14156;
	double radius;
	double circ;
	double area;

	printf("\nEnter the Radius of a Circle: ");
	scanf("%lf", &radius);

	circ = 2 * PI * radius;
	area = PI * radius * radius;

	printf("\ncircumference: %lf", circ);
	printf("\nArea: %lf", area);
	getchar();
	getchar();

	return 0;
}
