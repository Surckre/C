#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int age;
	printf("How Old are you?: ");
	scanf("%d", &age);
	printf("\nYou are %d Years old!", age);
	getchar();
}
