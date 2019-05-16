#include <stdio.h>
#include "operations.h"

int main() {
    printf("Hello, World!\n");
    
    printf("1+2 = %i\n", add(1,2));
    printf("1+(-2) = %i\n", add(1,-2));
    printf("1-2 = %i\n", sub(1,2));
    printf("1-(-2) = %i\n", sub(1,-2));

    return 0;
}