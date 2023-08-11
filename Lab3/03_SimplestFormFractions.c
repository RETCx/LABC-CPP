#include <stdio.h>
#include <stdlib.h>

int main(){
    // Declare two character arrays to hold the input strings
    char a[10],b[10];

    // Read in the input strings
    fgets(a,10,stdin);
    fgets(b,10,stdin);

    // Convert the input strings to integers and store them in variables
    int ai = atoi(a) ,ac = atoi(a), bi = atoi(b) , bc = atoi(b);

    // Initialize variables for the Euclidean algorithm
    int d = 1 , gcd ;

    // Check if the numerator is equal to 1
    if (ai == 1) {
        // If the denominator is also 1, the fraction is already simplified
        if (bi == 1){
            printf("1");
        }
        // If the denominator is not 1, print the fraction as-is
        else {
            printf("= %d/%d",ai,bi);
        }
    }
    // If the numerator is not 1, calculate the GCD using the Euclidean algorithm
    else{
           while(1){
        // If the remainder is 0, the GCD has been found
        if (d == 0){
            break;
            }
        // Calculate the remainder
        d = ai%bi;
        // Swap the values of ai and bi
        ai = bi;
        bi = d;
        // Set the GCD to the value of ai
        gcd = ai;
        } 
        // Convert the input strings back to integers
        int x = atoi(a) , y = atoi(b);
        // If the denominator is not a multiple of the GCD and the simplified fraction is not an integer, print the simplified fraction
        if(bc*gcd != ac && y/gcd != 1 ) {
            printf("= %d/%d",x/gcd,y/gcd);
        }
        // If the simplified fraction is an integer, print the integer value
        else {
            printf("= %d",x/y);
        }
    }
    return(0);
}
