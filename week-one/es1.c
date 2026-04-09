#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint8_t a = 5;
    uint8_t b = 10;
    uint8_t sum = a + b;

    printf("The sum of %d and %d is %d\n", a, b, sum);
    return 0;
}