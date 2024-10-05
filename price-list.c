#include <stdio.h>

int main() {
	// variables
	float item1 = 1.99;
	float item2 = 12.99;
	float item3 = 129.99;
	// print functions
	printf("-------------------------\n"); // decoration
	printf("Coca Cola: $%.2f\n", item1);
	printf("-------------------------\n"); // decoration
	printf("USB Stick (128GB)  $%.2f\n", item2);
	printf("-------------------------\n"); // decoration
	printf("PC Monitor $%.2f\n",item3);
	printf("-------------------------\n");// decoration
	getchar(); //prevent from automatic closing window
}
