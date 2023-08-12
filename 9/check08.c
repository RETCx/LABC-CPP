#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello,world,how,are,you";
    char s[] = ",";
    char *token;
    char *tokens[10];  // array to store the tokens
    int i = 0;
    
    token = strtok(str, s);  // get the first token
    while (token != NULL) {
        tokens[i++] = token;  // store the token in the array
        token = strtok(NULL, s);  // get the next token
    }
    
    // print the tokens
    for (int j = 0; j < i; j++) {
        printf("Token %d: %s\n", j, tokens[j]);
    }
    
    return 0;
}