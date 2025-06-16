#include <stdio.h>

// the while loop loops through a block of code as long as a condiion is true

int main() {
    
    // print while loop info
    printf("\n===WHILE LOOP===\n\n");
    
    // define integer i with value 0
    int i = 0;

    // while i is less than 5, print i
    while (i < 5) {
        printf("i: %d\n", i);
        i++;
    }


    // print do while loop info
    printf("\n===DO WHILE LOOP===\n\n");
    
    // define integer x with value 10
    int x = 10;

    // do print x while x is less than 5
    // the loop executes on the first pass
    // because the do is before the while
    do {
        printf("x: %d\n", x);
        i++;
    }
    while ( x < 5);


    // let's reverse a sequence of numbers
    printf("\n===REVERSE 12345\n\n");

    // set squence of numbers
    int numbers = 12345;
    printf("numbers: %d\n", numbers);

    // set a variable to store the reverse
    int revNumbers = 0;
    printf("revNumbers: %d\n", revNumbers);

    // reverse the order
    while (numbers) {
        // get the last number of numbers and add to revNumbers
        revNumbers = revNumbers * 10 + numbers % 10;
        
        // print numbers % 10 because I don't get it
        printf("numbers modulo ten: %d\n", numbers % 10);

        // divide numbers by 10
        numbers /= 10;

        // print through the loop to see how it works
        printf("numbers: %d\n", numbers);
        printf("revNumbers: %d\n", revNumbers);

    }

    // print done
    printf("\n===DONE===\n\n");
}