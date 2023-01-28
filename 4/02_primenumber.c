#include <stdio.h>
#include <stdlib.h>

int is_prime(int i) {
    int count = 0 ;
    for(int d = 2 ; d <= i ; d++){
        if (i % d == 0 && d!= i){
            return 0 ;
        }
        else if (d == i) {
            return 1 ;
            
        }
        
    }
}
int main() {
  char input[5];
  fgets(input, 5, stdin);

  int i, n;

  n = atoi(input);

  for (i = 2 ; i <= n ; i += 1) {
      if (is_prime(i)) {
          printf("%d is a prime number.\n", i);
      }
  }

  return 0;
}