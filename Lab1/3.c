#include<stdio.h>
int main()
{
    
float preGrade = 1.75;
int preCredit = 21;
int credit = 18; 
float requiredGrade = 2.00;
    
float x = ((requiredGrade*(preCredit + credit))  -  (preCredit*preGrade))/credit;
printf("The GPA this semester should be %.2f",x);

return 0;
}