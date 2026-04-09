#include <stdio.h>

// bn7ot 'size' bec the function needs to know how many elements are in the array

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);  // print each element
    }
}

int main(void) {
    int values[] = {1, 2, 3, 4, 5};
    int size = sizeof(values) / sizeof(values[0]);
    printf("the array elements are: ");
    print_array(values, size);
    printf("\n");
    return 0;
}