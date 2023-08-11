#include <stdio.h>
#include <stdlib.h>
// // int x ;
// int value = 10 ;
// // char y ;
// void func(){
//     static int value ;

//     value = value ;
//     printf("value = %d\n" , value);
// }
// int get_score(void){
//     static int score;
 
//     score++ ;
//     return score ;
// }
// int main(){
//     // // int i  ;

//     // // for(i = 1; i <= 8 ;i+=i) /*FOR  ไม่จำเป็นต้องใส่ ; or {}*/
//     // // printf("%d\n" , i);
//     // int y = 0 ,x= 3 ;
//     // for(; x!= 0 ; x>>= 1) /*x>>=1 bit one and change x to x >> 1*/
//     //     y += x & 1 ;
//     // printf("%d\n" , y);
//     // printf("%s\n",x);
//     // printf("%d",y);]
//     // char ans = 'y' ;
//     // int cnt , score = 0 ;
//     // printf("%d" ,ans);
//     // cnt = 0 ;
//     // if(ans = 'y'){
//     //     int score = 1 ;
//     //     int x = 1 ;

//     // }
//     // else{
//     //     int score = 0 ;
//     // }
//     // cnt  = cnt + score ;
//     // printf("%d" ,cnt);
//     int i;
//     for(i = 1 ; i < 10 ; i++)
//         printf("%d" , get_score());
// // }
// void square(int *val){
//     *val = *val * *val ;
// }
// void main(){
//     // extern int 
//     // auto
//     // int x = 4  ;
//     // square(&x); 
//     extern int value ;
//     value = value;
//     printf("value:%d",value);
    
// }
// int value = 10 ;
// int Double = 40 ;
int main(){
    int a = 010 ;
    printf("%d\n" , a);
    int q = {16 , 17 , 13 ,-1};
    int A = 12 , B = 12 ;
    int m , n ;
    for(m = 0 ; m < A ; m++){
        for(n = 0 ; n < B;n++){
            if(((m/4)%2) != ((n/4)%2)){
                putchar('O');
            }
            else{
                putchar('X');
            }
        }
        printf("\n");
    }
}

