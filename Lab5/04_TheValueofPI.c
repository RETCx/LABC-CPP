#include <stdio.h>
int main(){
    int n = 0 , i ;
    double pi = 0 , d = 1 ;
    printf("Enter n: ");
    scanf("%d" , &n);
    for(i = 1; i <= n ; i++ ){
        if((i%2)!= 0){
            pi += (4/d);
        }
        else{
            pi -= (4/d);
        }
        d += 2 ;
    }
    printf("%.10lf" , pi);
    return 0 ;
}