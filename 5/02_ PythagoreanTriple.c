#include <stdio.h>
int main(){
    int p , a ,b ,c , x , q = 0;
    scanf("%d" , &p);
    for (int i = 1 ; i <= p ; i++){
        a = i ;
        for (int j = i + 1 ; j <= p ; j++){
            b = j ;
            c = p - (a + b) ;
            if ((c*c) == (a*a) + (b*b)){
                printf("(%d, %d, %d)\n" , a , b ,c );
                q = 1 ;
                break ;
                 }           
        }
    }
    
    if(q == 0){
        printf("No triple found.");
    }

}