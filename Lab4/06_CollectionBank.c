#include <stdio.h>
#include <stdlib.h>
int main(){
    char amountz[10] , moneycc[10] ;
    printf("Enter your goal amount: ");
    fgets(amountz , 10 , stdin);
    float amount = atof(amountz) , collect = 0 , money = 0 , moneyl = amount , collect_days = 0 ;
    int count = 0 ; 
    if(amount > 0){
        while(1){
            count += 1;
            
            printf("Enter money collected today: ");
            fgets(moneycc ,10 , stdin);
            float collect = atof(moneycc )  ;
            moneyl -= collect ;
            collect_days += collect ;
            if (moneyl <= 0.00) {
                if (count == 1){
                    printf("Congratulations! You take %d day to reach your goal.",count);
                }
                else {
                    printf("Congratulations! You take %d days to reach your goal.",count);
                }
                break ;
            }
            
            printf("Total money collected up to day %d is %.2f. You need %.2f more.\n", count ,collect_days , moneyl);
            
        }
        
    }
    return 1 ; 
}