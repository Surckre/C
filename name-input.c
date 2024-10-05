#include <stdio.h>

int main() {
    char* name[256]; // buffer size
    printf("--------------------\n"); // decoration only
    scanf("%[^\n]", &name);
    printf("--------------------\n"); // decoration only
    printf("Hello %s! \n", name);
    printf("--------------------\n"); // decoration only
    getchar(); //prevent from automatic closing terminal
    return 0;
}
