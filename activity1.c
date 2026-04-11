// Week 1 - Programming Fundamentals with C and Embedded Systems
// The Smart Classroom Score Analyzer

#include <stdio.h>
#include <stdint.h>

#define STUDENT_COUNT 5

typedef uint8_t score_t;

void print_scores(score_t arr[], uint8_t size) {
    for (uint8_t i = 0; i < size; i++) {
        printf("Score %u = %u\n", i, arr[i]);
    }
}

uint8_t calculate_average(score_t arr[], uint8_t size)
{
    uint16_t sum = 0;
    for (uint8_t i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (uint8_t)(sum / size);
}


void find_max(score_t arr[], uint8_t size, score_t *max_value) {
    *max_value = arr[0];
    for (uint8_t i = 1; i < size; i++) {
        if (arr[i] > *max_value) {
            *max_value = arr[i];
        }
    }
}

int main(void) {
    score_t scores[STUDENT_COUNT] = {78, 85, 91, 66, 88};
    score_t highest = 0;
    print_scores(scores, STUDENT_COUNT);
    printf("Average = %u\n", calculate_average(scores, STUDENT_COUNT));
    find_max(scores, STUDENT_COUNT, &highest);
    printf("Highest = %u\n", highest);
    return 0;
}