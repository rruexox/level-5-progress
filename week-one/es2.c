#include <stdio.h>

int main(void) {
    int marks[] = {80, 85, 90, 95};
    int count = sizeof(marks) / sizeof(marks[0]);
    int sum = 0;

    for (int i = 0; i < count; i++) {
        sum += marks[i];
    }

    printf("sum = %d\n", sum);
    printf("average = %.2f\n", (float)sum / count);
    return 0;
}