#include <stdio.h>
int main(){
    long long int n = 0 , n2 , check = 0  , d = 10;
    printf("Input n = ");
    scanf("%lld" , &n);
    printf("n^2 = ");
    n2 = n*n ;
    printf("%lld\n" , (n2));
    while(1){
        check = n2%d ;
        if (check == n){
            printf("Yes. %d is automorphic number.",n);
            break;
        }
        else {
            if(check != n2){
                d *= 10 ;
            }
            else{
                printf("No. %d is not automorphic number." , n);
                break;
            }
        }


    }
    return 0 ;
}