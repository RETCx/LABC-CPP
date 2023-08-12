#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct good {
        char name[20];
        struct good *next;
}Good;

Good *start = NULL;

void add_good(Good *new_good){
        //ถ้าเข้า่มาครั้งแรกจะไปเข้าเงื่อนไข else
        Good *current_good = start; //ประกาศ pointer *current_good ที่เก็บ address ของ Good *start = NULL ในการเข้าครั้งแรก ถ้าเข้าครั้งต่อๆไปจะให้
                                   // current_good = start โดยที่ start จะเก็บ address ของ node ก่อนหน้า
        Good *previous_good = NULL;
        while(current_good){ // ตราบใดที่ current_good != NULL
                previous_good = current_good; //เป็นตัวแปรที่เก็บ ค่าของ current_good ซึ่งเก็บ address ของ start
                current_good = current_good->next;//ให้ current_good มีค่าเป็น address ของข้อมูลใน node ถัดไป
        }
        if(previous_good != NULL){//ถ้า previous_good = NULL ก็คือ ไม่เข้า while ก่อนหน้า ทำให้เข้าเงื่อนไขนี้ และเงื่อนไงนี้จะไม่ถูกเขาจากครั้งแรกของ while ใน main
                previous_good->next = new_good;//
        }else{
                start = new_good; //ให้ start = adddess ของ new_node ที่ malloc ไว้
        }
}
int print_all_goods(){
        int couter = 0 ;
        Good *check = start;//head
        while(check){
                printf("%s\n",check->name);
                check = check->next ;
                couter++;
        }
        return couter ;
        

}
main(){
        char name[20];
        int price;
        Good *new_node; //ประการศ pointer ที่ชี้ไปยัง struct good 
        printf("Name: ");
        scanf("%20s",name);


        while(strcmp(name,"done")){
                new_node = (Good *)malloc(sizeof(Good)); //จองพิ้นที่ ขนาด struct good 
                strcpy(new_node->name,name);
                new_node->next = NULL; //หลังจากที่จองพิ้นที่แล้ว กำหนดค่า ของ next ใน struct good ที่จองมาให้เป็น NULL
                add_good(new_node);

                printf("Name: ");
                scanf("%20s",name);
        }

        printf("total = %d\n",print_all_goods());
}