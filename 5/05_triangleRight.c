#include <stdio.h>
int main(){
    printf("Enter n: ");
    int n = 0 ;
    scanf("%d" , &n);
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= i ; j++ ){
            if(j%2 == 0 ){
                printf("-");
            }
            else {
                printf("x");
            }
        }
        printf("\n");
    }
    for(int i = n - 1 ; i > 0 ; i--){
        for(int j = 0 ; j < i  ; j++){
            if(j%2 == 0 ){
                printf("-");
            }
            else {
                printf("x");
            }
        }
    printf("\n");
    }
}