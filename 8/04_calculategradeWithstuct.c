#include<stdio.h>
#define NUM_STUDENT 5
struct student {
   char ID[100] ;
   int MidS , FinalS; 
};
int calculateGrade(int i ,struct student *st_info){
    int grade = 0 ,score = (st_info[i].MidS + st_info[i].FinalS); 
    if(score >= 80){
            grade = 'A';
    }
    else if((score >= 70)&&(score < 80)){
        grade = 'B';
    }
    else if((score >= 60)&&(score < 70)){
        grade = 'C';
    }
    else if((score >= 50)&&(score < 60)){
        grade = 'D';
    }
    else{
        grade = 'F';
    }
    return grade ;
}
int main(){
    struct student st_info[NUM_STUDENT]; 
    for(int i = 0 ; i < NUM_STUDENT ; i++){
        printf("Enter Student ID: ");  
        scanf("%s",st_info[i].ID);
        printf("Enter Student Midterm: ");
        scanf("%d",&st_info[i].MidS);
        printf("Enter Student Final: ");
        scanf("%d",&st_info[i].FinalS);
    }
    for(int i = 0 , grade = 0 ; i < NUM_STUDENT ; i++){
        grade = calculateGrade(i,st_info);
        printf("Student ID %s receives grade %c.\n",st_info[i].ID,grade);
    }


}