#include <stdio.h>
#include <stdlib.h>
int main(){
    char ws[10] , ls[10] ;
    fgets(ws , 10 , stdin);
    fgets(ls , 10 , stdin);
    int w = atoi(ws) , l = atoi(ls) , i , j = 0 , k = 0;
    for (i = 0 ; i < w ; i++){
        printf("*");
    }
    for (i = 0 ; i < l - 2  ; i++ ){ //loop y axis
        printf(" \n"); //space
        for (k = 0 ; k <= i ; k++){ //space before * each line
            printf(" ");
        }
        printf("*");
        for (j = 0 ; j < w - 2 ; j ++){ // loop in *  * line 
            printf(" ");
        }
        printf("*");
    }
    printf("\n");
    for (i = 0 ; i <= k ; i++){
        printf(" ");
    }
    for(i = 0 ; i< w ; i ++){
        printf("*");

    }
    return 1 ;
}