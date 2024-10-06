#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	char name[25];
	int age;
	printf("Whats ur name?: ");
	scanf("%s", name);
	printf("How Old are you?: ");
	scanf("%d", &age);
	printf("Your Name is %s ", name);
	printf("and you are %d Years old!", age);
	getchar();
}
