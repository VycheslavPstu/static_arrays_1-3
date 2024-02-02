#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>

using namespace std;


void print_array(int *numbers, int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", numbers[i]);
    }

    printf("\n");
}


int main() {
    int size = 10;
    int numbers[size] = {};
    int min_counter = 0, max_counter = 0;

    srand((unsigned) time(NULL));

    for (int i = 0; i < size; ++i) {
        numbers[i] = 1 + (rand() % 1000);
    }

    int min = *min_element(numbers, numbers + (sizeof(numbers) / sizeof(int)));
    int max = *max_element(numbers, numbers + (sizeof(numbers) / sizeof(int)));

    for (int i = 0; i < size; ++i) {
        if (numbers[i] == min) {
            ++min_counter;
        }

        if (numbers[i] == max) {
            ++max_counter;
        }
    }

    print_array(numbers, size);

    printf("min = %d; max = %d\n", min, max);

    printf("min_counter = %d; max_counter = %d\n", min_counter, max_counter);

    return 0;
}
