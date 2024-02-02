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
    int size = 10, initial_size = 100, counter = 0;
    int numbers[initial_size] = {10, 3, 5, 7, 9, 13, 15, 17, 19};

    srand((unsigned) time(NULL));

    for (int i = 0; i < size; ++i) {
        numbers[i] = 1 + (rand() % 1000);
    }

    printf("Array befor: ");
    print_array(numbers, size);
    

    for (int i = 0; i < size; ++i) {
        if (numbers[i] % 2 == 0) {
            counter += 1;

            numbers[i] = 0;
        }
    }

    int current_index = 0;

    while (current_index < size - counter) {
        if (numbers[current_index] == 0) {
            for (int i = current_index; i < size; ++i) {
                numbers[i] = numbers[i + 1];
            }
        } else {
            current_index += 1;
        }
    }

    printf("Array after: ");
    print_array(numbers, size - counter);

    return 0;
}

