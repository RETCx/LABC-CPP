#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function that returns the nth fibonacci number
int fibo(int n) {
    int f ;
    f = (pow(1 + sqrt(5),n) - pow(1 - sqrt(5),n))/((pow(2,n))*sqrt(5));
    return f ; 
}

int main() {
  char in[100] ;
  fgets(in , 100 ,stdin);
  int n = atoi(in);
  for (int i = 0; i <= n; i++) {
    printf("F(%d) = %d \n", i , fibo(i));
  }

  return 0;
}