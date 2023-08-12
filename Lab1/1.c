#include<stdio.h>
int main() {
    int computer_time = 785;  // ในโปรแกรมตรวจอาจเปลี่ยนค่าของตัวแปรนี้ แต่นิสิตไม่ต้องเปลี่ยนค่าของตัวแปรนี้
    
    int d_time = computer_time / (60*24) ;
    int h_time =  (computer_time / 60) - (d_time * 24 )  ; // int/int = int
    int m_time = computer_time - ((d_time*(60*24)) + (h_time*60)) ;
    printf("It is %d days %d hours and %d minutes.",d_time,h_time,m_time);
    

    return 0;
}
