#define _CRT_SECURE_NO_WARNINGS // just dont prevent buffer overflow (needed in vs 2022)
#include <stdio.h>

int main() {
	int y ;
	printf("How much u want to count: ");
	scanf("%d", &y);
	for (int i = 1; i <= y; i++) {
		printf("%d\n", i);
	}
}
