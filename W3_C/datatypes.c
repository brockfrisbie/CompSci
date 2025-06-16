#include <stdio.h>

// Let's look at data types.


// main function
int main() {

    // int is 2 or 4 bytes; stores integers

    // float is 4 bytes; stores numbers with up to 6 decimal places

    // double is 8 bytes; stores numbers with up to 15 decimal places

    // char is 1 byte; stores single character


    // Characters
    // must be surrounded by single quotes
    char myInitial = 'B';
    printf("myInitial: %c\n", myInitial);
    

    // you can assign ASCII numbers which will assign the character
    char bigA = 65;
    printf("bigA: %c\n", bigA);

    // use int when you need to store a whole number
    int myInt = 10;
    printf("myInt: %d\n", myInt);

    // use a float for decimal places
    float myFloat = 3.5;
    printf("myFloat: %f\n", myFloat);

    // control how many decimal places are printed
    printf("myFloat: %.2f\n", myFloat); // 2 digits


    // let's look at the size of some of our variables
    printf("myInitial: %zu bytes\n", sizeof(myInitial));
    printf("bigA:      %zu bytes\n", sizeof(bigA));
    printf("myInt:     %zu bytes\n", sizeof(myInt));
    printf("myFloat:   %zu bytes\n", sizeof(myFloat));


    // you can create a constant for variables that won't change value
    const int FAVNUMBER: 7;
    const int MINPERHOUR = 60;
}