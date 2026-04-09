#include <stdio.h>

int add(int a, int b) {
    int result = a + b;
    return result;
}

void print_sum(int a, int b) {
    int sum = add(a, b);
    printf("The sum of %d and %d is %d\n", a, b, sum);
}

int main() {
    int x = 5;
    int y = 7;
    print_sum(x, y);
    return 0;
}