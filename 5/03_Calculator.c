#include <stdio.h>
int main(){
    char op[5] , *ptr ;
    printf("Initial Value: ");
    double in_value = 0 , iv = 0  ;
    scanf("%lf", &in_value);
    double collect = in_value ;
    while(1){
        printf("\n");
        printf("Operator: ");
        scanf(" %s" , op);
        ptr = op ;
        if((*ptr != '+') && (*ptr != '-') && (*ptr != '*') &&(*ptr != '/')){
            break;
        }
        printf("Input Value: ");
        scanf("%lf" , &iv);
        printf("Present Value is ");
        if(*ptr == '+'){
            collect += iv;
        }
        else if(*ptr == '-'){
            collect -= iv ;
        }
        else if (*ptr == '*'){
            collect *= iv ;
        }
        else if (*ptr == '/'){
            collect /= iv ;
        }
        printf("%.4lf\n" , collect);

    }
    printf("\nFinish Calculation. Final Value is %.4lf\n" , collect);

    



    return 0 ;
}