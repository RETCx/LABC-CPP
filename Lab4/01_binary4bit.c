#include <stdio.h>
#include <stdlib.h>
int main(){
    char num[6] , binary[6];
    fgets(num , 6 , stdin);
    int numi = atoi(num);
    printf("Binary number of %d is " , numi);
    for(int i = 0 ;i < 4 ; i++){
        binary[i] = numi & 1 ; /* ex numi = 7 ,if use & it will be 0111 & 1 เอาตัวที่เหมือนกัน จะได้ 0001 = 1 */
        numi = numi >> 1 ; /* เอา 0111 เลื่อน 1 ด้านขวา ได้ 0011  แล้วทำวนไป*/
    }
    for(int j = 3 ; j >= 0 ; j-- ){
        printf("%d",binary[j]);
    }
    printf(".");
    return 1 ;
}