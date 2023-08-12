#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    char size[3],pep[3],cheese[3],mush[3];
    printf("Welcome to My Pizza Shop!!\n~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    fgets(size,3,stdin);
    printf("Extra pepperoni? (1=yes, 0=no): ");
    fgets(pep,3,stdin);
    printf("Extra cheese? (1=yes, 0=no): ");
    fgets(cheese,3,stdin);
    printf("Extra mushroom? (1=yes, 0=no): ");
    fgets(mush,3,stdin);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    int sizei  = atoi(size) ;
    int sizep = 0 ;
    int pepe = atoi(pep);
    int cheesep = atoi(cheese);
    int mushp = atoi(mush);
    if (size > 0){
        if (sizei == 1){
            sizep = 10;  
        }
        else if (sizei == 2){
            sizep = 16;
        }
        else{
            sizep = 20 ;
        }
    }
    float squaresize = M_PI*(sizep * sizep) ;
    float area = squaresize/4.0;
    printf("%f\n",area);
    float extracost = 0 ;
    if(pepe == 1){
        extracost += 0.50 ;
    }
    if(cheesep == 1){
        extracost += 0.25;
    }
    if(mushp == 1){
        extracost += 0.30 ;
    }
    float cost = 5 + (2 * area) + (extracost * area) ;
    float price = 1.5 * cost ;
    printf("Your order costs %.2f baht.\n",price);
    printf("Thank you.");
    
}