#include <stdio.h>
#include <stdlib.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    float salary = atof(str);
    if(salary < 0){
        printf("Error: Salary must be greater or equal to 0");
    }
    else {
        float tax5 = 5/100.0 ; 
        if (salary < 300000.01){
            float tax = (salary)*(tax5);
            printf("%.2f",tax); 
        }
        else {
            float tax10 = 10/100.0 ;
            float tax = (300000)*(tax5);
            tax = tax + ((salary - 300000)*tax10) ;
            printf("%.2f",tax);
        }
    }
    return 0 ;
}