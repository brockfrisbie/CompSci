#include <stdio.h>

// use the for loop when you know how many times you want to iterate a loop


int main() {

    // print even numbers

    int i;

    for (i = 0; i <= 10; i = i + 2) {
        printf("%d\n", i);
    }


    // you can next a loop inside a loop
    int x, y;

    // Outer loop
    for (x = 1; x <= 2; ++x) {
        printf("Outer: %d\n", x);  // Executes 2 times

        // Inner loop
        for (y = 1; y <= 3; ++y) {
            printf(" Inner: %d\n", y);  // Executes 6 times (2 * 3)
        }
    }
}
