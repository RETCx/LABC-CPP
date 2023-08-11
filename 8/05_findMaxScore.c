#include <stdio.h>

#define ARRAY_SIZE 5
typedef struct Student {
  char id[12];
  int midterm;
  int final;
  char grade;
} StudentRecord ;


void findTop(StudentRecord pRec[], int size, StudentRecord **topMid, StudentRecord **topFin) {
    StudentRecord *maxMid , *maxFinal ; int i = 0 ;
    maxMid = &pRec[i]; maxFinal = &pRec[i];
    for(i ; i < size ; i++){
        if(pRec[i].midterm > maxMid->midterm){ /* -> คือ (*maxMid).midtrem */
/*maxMid เป็น ptr ของ struct Students ซึ่งจะเก็บ address  ของ pRec[i] , maxMid->midterm maxMid จะชื้จุดที่ pRec[i] อยู่ ,->จะทำการชี้ไปยัง address ที่เก็บ midterm แล้วแสดงค่านั้นออกมา  */
            maxMid = &pRec[i];   
        }
        if(pRec[i].final > maxFinal->final ){
            maxFinal = &pRec[i];
        }
    }
    *topMid = maxMid ; *topFin = maxFinal ; 
    /* ก็น่าจะเหมือนกับเวลา int *ptr ตอนใส่ค่าเข้าไปจะเขียน ptr = &num ซึ่งในโค้ด maxMid and maxFinal เก็บ  address อยู่แล้ว */
    /*จาก https://stackoverflow.com/questions/35021521/what-does-do-in-c-language ได้ว่า 
    int a = 3;
    int* b = &a; // b is pointer. stored address of a
    int**c = &b;  // c is pointer to pointer. stored address of b
    int***d = &c; // d is pointer to pointer to pointer. stored address of d. You get it. */
}

int main() {

  StudentRecord students[ARRAY_SIZE], *pTopMid, *pTopFin;
  int gradeCount[5] = {0};
  int i;
  for (i=0; i <  ARRAY_SIZE; i++) {
    printf("Enter Student ID: ");
    scanf("%s", students[i].id);
    printf("Enter Student Midterm: ");
    scanf("%d", &students[i].midterm);
    printf("Enter Student Final: ");
    scanf("%d", &students[i].final);

  }

  findTop(students,ARRAY_SIZE,&pTopMid,&pTopFin); /*ส่ง address ไป เพราะว่า อยากให้เก็บค่า address ที่ เป็นคะแนนมากสุด*/

  //print grade
  printf("Top Score for Midterm:\n");
  printf("Student ID %s with score %d\n", pTopMid->id , pTopMid->midterm);
  printf("Top Score for Final:\n");
  printf("Student ID %s with score %d\n", pTopFin->id , pTopFin->final);




  return 0;
}