#include <stdio.h>
#include <stdlib.h>
int main() {
    char N[10];
    fgets(N,10,stdin);
    int n ;
    n = atoi(N);
    if (n <= 0 || n > 26){
        printf("-");
    }
    else if (n == 1){
        printf("a");
    }
    else {
        n = atoi(N) - 1;
        int alpha ,r ;
        alpha = 'a' ;
    for (n ; n >= 0 ; n = n - 1){
        int r = alpha + n;
        printf("%c",r);
        printf("-");
    }
    n = atoi(N) - 1;
    int l = 1 ;
    for (l ; l < n ; l = l + 1){
        int r = alpha + l ;
        printf("%c",r);
        printf("-");
    }
    printf("%c", alpha + n );
    }
  
}