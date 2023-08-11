#include <stdio.h> // Include the standard input/output library
#include <stdlib.h> // Include the standard library

int main(){
    // Declare a character array to hold the input number as a string
    char a[10];

    // Read the number from standard input (e.g., keyboard)
    // and store it in the a array
    fgets(a,10,stdin);

    // Convert the number from its string representation to an integer
    // and store it in the variable N
    int N = atoi(a);

    // Declare the variables r and c
    int r, c;

    // Enter a for loop that iterates from 0 up to N
    // and increments r by 1 each time
    for(r = 0 ; r < N ; r++){
        // Enter a for loop that iterates from 0 up to r
        // and increments c by 1 each time
        for(c = 0 ; c <= r ; c++ ){
            // Print an asterisk (*) to the console
            printf("*");
        }
        // Print a newline character to the console
        printf("\n");
    }

    // Enter a for loop that iterates from N - 2 down to 0
    // and decrements r by 1 each time
    for(r = N - 2; r >= 0 ; r-- ){
        // Enter a for loop that iterates from 0 up to r
        // and increments c by 1 each time
        for(c = 0  ; c <= r ; c++ ){
            // Print an asterisk (*) to the console
            printf("*");
        }
        // Print a newline character to the console
        printf("\n");
    }
}
