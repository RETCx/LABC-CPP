#include <stdio.h>
#include <stdlib.h>
int main(){
    char Ms[100] , Ns[100];
    fgets(Ms,100,stdin);
    fgets(Ns,100,stdin);
    long long A = atoll(Ms);
    long long B = atoll(Ns);
    long long int i = 1,GCD = 0, M , N , D ;
    if (A - B >= 0){
        M = A;
        N = B;
    }
    else {
        M = B;
        N = A;
    }

    while(1){
        if (N == 0){
            break;
        }
        D = M%N ;
        M = N;
        N = D;
        GCD = M;
    }
    printf("GCD: %lld\n",GCD);
    long long int LCM = (A*B)/(GCD) ;
    printf("LCM: %lld\n", LCM );


}