# include <stdio.h>
# include <stdlib.h>
int main(){
    char a[10] ;
    fgets(a,10 , stdin);
    int N = atoi(a) , i = 0 , al = 'a'   ;
    if(N > 0 && N <= 26)
    {for(int line = 0 ; line < N ;line++){/*ทำจนตำแหน่งกลาง = a */
            int alpha_point = (2*(N) - 2);  /*ต้องประกาศใหม่ทุกครั้ง ไม่งั้นค่า จะคลาดเคลื่อน */
            alpha_point -= (2 * line) ; /* ตำแหน่งของตัวอักษรจะลดลงตามแถว แล้วค่อยๆเพิ่มจนเท่ากับ (2*(N) - 2) ใน if(line != 0)*/
            int alpha = N - 1 ; /*ต้องประกาศใหม่ทุกครั้ง เพราะใน if(line != 0) จะทำการลดในแต่ละแถวเรื่อยๆ เหมือนการรีค่าใหม่ */
            for(int i = 0 ; i <= (2*(N) - 2) ; i++){
                if (i == alpha_point){
                    printf("%c" , al+(alpha));
                    if (line != 0){
                        alpha_point += 2 , alpha -= 1; ;   
                    }
                }
                else {
                    printf("-");
                }   
            }
            alpha_point = (2*(N) - 2) - 1 ; /* - เพิ่ม 1 ตัว เพราะด้านบนพิมพ์แล้ว */
            int j = 0 ;
            for(int i = (2*(N) - 2) ; i > 0 ; i-- ){/*ด้านหลังบน*/
                if ((i == alpha_point) && (line != 0)){
                    printf("%c" , al+(alpha) + 2); /* +2 เพราะค่าที่ - ด้าน - เกินไป 1 ตัวก่อนจะ ออกมา*/
                    if (line != 0 && j < line - 1){ /*line - 1 เพราะ  พิมพ์ ตัวออกมาก่อน เลยต้อง - line ไป 1 เพื่อให้ไม่พิมพ์เกิน แบบ พิมหลังตัวกลางก่อนแล้วที่จะเช้า ลูป*/
                        alpha_point -= 2 ,alpha += 1;  
                    }
                j += 1 ;
                }
                else {
                    printf("-");
                }
            }
            printf("\n"); 
        }
        for(int line = N - 2 ; line >= 0 ;line--){ /* line = N - 2 เพราะว่า อันบนพิมพ์ไปแล้ว และถุ้าไม่ลบ จะที่เป็น 2 เพราะ จะ - กับแล้วได่ 2 ซึ่งจะได้ตำแหน้งที่ 2 พอดี*/
            int alpha_point = (2*(N) - 2) ;  
            alpha_point -= (2 * line)  ; /* ตำแหน่งของตัวอักษรจะลดลงตามแถว แล้วค่อยๆเพิ่มจนเท่ากับ (2*(N) - 2) ใน if(line != 0)*/
            int alpha = N - 1 ; /*ต้องประกาศใหม่ทุกครั้ง เพราะใน if(line != 0) จะทำการลดในแต่ละแถวเรื่อยๆ เหมือนการรีค่าใหม่ */
            for(int i = 0 ; i <= (2*(N) - 2) ; i++){
                if (i == alpha_point){
                    printf("%c" , al+(alpha));
                    if (line != 0){
                        alpha_point += 2 , alpha -= 1; ;   
                    }
                }
                else {
                    printf("-");
                }   
            }
            alpha_point = (2*(N) - 2) - 1 ; /* - เพิ่ม 1 ตัว เพราะด้านบนพิมพ์แล้ว */
            int j = 0 ;
            for(int i = (2*(N) - 2) ; i > 0 ; i-- ){/*ด้านหลังบน*/
                if ((i == alpha_point) && (line != 0)){
                    printf("%c" , al+(alpha) + 2); /* +2 เพราะค่าที่ - ด้าน - เกินไป 1 ตัวก่อนจะ ออกมา*/
                    if (line != 0 && j < line - 1){ /*line - 1 เพราะ  พิมพ์ ตัวออกมาก่อน เลยต้อง - line ไป 1 เพื่อให้ไม่พิมพ์เกิน แบบ พิมหลังตัวกลางก่อนแล้วที่จะเช้า ลูป*/
                        alpha_point -= 2 ,alpha += 1;  
                    }
                j += 1 ;
                }
                else {
                    printf("-");
                }
            }
            printf("\n"); 
        }
    }
    else{
        printf("-");
    }
    return 1 ;

}
