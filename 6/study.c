#include <stdio.h>
int addTen(int x){
    x += 10 ; /**/
    return x ;

}
void addTwenty(int *x){ //intx[] part by ref
    /*ไม่ return ค่า*/
    *x += 20; /*+ ค้าใน address นั้น*/ //x+= 20 จะ+x ส่วน * +ค่าใน address
}
int main(){
    int x = 10 ;
    int y = addTen(x);
    printf("x = %d , y = %d\n" , x ,y);
    addTwenty(&x);
    printf("x = %d , y = %d\n" , x ,y);
    addTwenty(&y);
    printf("x = %d , y = %d\n" , x ,y);
    /*
    ข้อแรก scanf("%d : %d : %c" , , ) ถ้าใช้ %s ต้องแปลง string */

    /*getchar() ได้เหมือนกัน
    ข้อ 4 scanf("\n%c(%d, %d)" , , ,)  ถ้ารับ %c หลายครั้งต้องใส่ \n เสมอ หริอ ใส่ช่องว่าง*/ 


}
