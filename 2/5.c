#include <stdio.h>
#include <stdlib.h>
int main() {
    char A[10] , B[10] , C[10] ;
    printf("Enter length of side A: ");
    fgets(A,10,stdin);
    printf("Enter length of side B: ");
    fgets(B,10,stdin);
    printf("Enter length of side C: ");
    fgets(C,10,stdin);
    int sideA , sideB , sideC;
    sideA = atoi(A); sideB = atoi(B); sideC = atoi(C);
    if ((sideA != 0 && sideB != 0 && sideC != 0) && ((sideA + sideB > sideC) && (sideA + sideC > sideB) && (sideB + sideC > sideA))){
        if(sideA == sideB && sideA == sideC){
            printf("Triangle type is equilateral.");
        }
        else if ((sideA == sideB || sideA == sideC) || ( sideB == sideC) ){
            printf("Triangle type is isosceles.");
        }
        else if ((sideA != sideB && sideA != sideC) || (sideB != sideA && sideB != sideC) || (sideC != sideA && sideC != sideB)) {
            printf("Triangle type is scalene.");
        }
    }
    else{
        printf("Triangle type is invalid.");
    }
 
    


}