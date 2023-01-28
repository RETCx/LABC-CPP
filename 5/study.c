#include <stdio.h>
int main(){
    // int x = 100 , a = 0144 ;//a ฐาน8 =100 ในฐาน 10 , 0x ฐาน 16 , address of x = 00dffba8
    // printf("%d\n", x);
    // printf("%d\n", &x); //printf address of x
    // printf("%p\n", &x); //ส่่วนมากใช้ p 
    // x = 200 ; // เปลี่ยนได้ ,  แต่ &x เปลี่ยนไม่ได้  ถ้า แทน x ใหม่ = 200 address เดิมแค่เปลี่ยนค่า
    // // pointer เอาไว้เก็บ address ของ คนอื่น
    // int  *ptr ; //ประกาศตัวแปร pointer ของ int , int *ptr = &x ; 
    // ptr = &x; // ptr = 00dffba8
    // printf("value of ptr = %p\n" , ptr);
    // printf("reference of ptr = %p\n" , &ptr); // have adress by own self
    // printf("value of reference *ptr = %d , %d\n" , *ptr , x); // dereferencing , *ptr ชี้ address ของ x , จะไปที่ 00dffba8 แล้วดึงข้อมูลมา


    // x += 50 ;
    // printf("value of reference *ptr = %d , %d\n" , *ptr , x);
    // *ptr += 100 ;
    // printf("value of reference *ptr = %d , %d\n" , *ptr , x);

    // int data[10]; // data of int , size  = 10 bytes
    // int data1[10] = {10, 20 ,30 ,40 ,50} ; //จอง 10 เก็บ 5 ได้
    // printf("data = %p\n" , data1);
    // for (int i = 0; i < 10 ;i++){
    //     printf("[%p] data1[%d] = %d\n" , &data1[i] , i , data1[i]);

    // } 
    // // data1 + 4 * 10
    // printf("data[50] [%p] = %d\n", &data1[50] , data1[50]); //00c8f918 + 4 * 50
    // data1[50] = 100 ;
    // printf("data[50] [%p] = %d\n", &data1[50] , data1[50]); //00c8f918 + 4 * 50

    // for (int i = 0 ; i < 10 ; i++){
    //     printf("[%d] [%p] [%d]\n" , i , data1 + i , *(data1+ i));
    // }
    // // segmentation fault การเข้าถึงเนื้อที่ ที่ os ไม่ได้ให้เข้าถึง ค่าเกิน 1096
    
    // int x ;
    // char s[20] ;  
    // scanf("%d %s" , &x , s) ; // part by referance

    // for (char *cPtr = s ; *cPtr != '\0' ; cPtr++){
    //     printf("[%p] = %c\n" , cPtr , *cPtr);

    // }
    int x = 10 ;
    int ptr = &x;
    printf("%p" ,ptr);
}