#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	double A;
	double B;
	double C;

	printf("Enter Side A: ");
	scanf("%lf", &A);

	printf("Enter Side B: ");
	scanf("%lf", &B);

	C = sqrt(A * A + B * B);

		printf("Side C: %.2lf", C);
		getchar();
		getchar();
}
