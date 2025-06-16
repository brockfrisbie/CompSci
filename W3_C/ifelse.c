// let's do some if else stuff

// header stuff
#include <stdio.h>

// main function
int main() {

    // let's set some variables first
    int x = 5;
    int y = 7;

    // now let's check if something is true and then do something

    printf("\n\n===IF===\n\n\n");

    if ( x < y) {
        printf("x is less than y\n");
    }


    // now let's execute something if the if statement is false

    printf("\n\n===IF / ELSE===\n\n\n");

    if ( x > y) {
        printf("x is greater than y\n");
    }

    else {
        printf("x is less than y\n");
    }


    // now the full evaluation

    printf("\n\n===IF / ELSE IF / ELSE===\n\n\n");

    if ( x > y) {
        printf("x is greater than y\n");
    }

    else if (x < y) {
        printf("x is less than y\n");
    }

    else {
        printf("x is equal to y\n");
    }
}
