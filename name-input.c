#include <stdio.h>

int main() {
    char* name[2];
    printf("--------------------\n"); // decoration only
    scanf("%[^\n]", &name);
    printf("--------------------\n"); // decoration only
    printf("Hello %s! \n", name);
    printf("--------------------\n"); // decoration only
    return 0;
}
