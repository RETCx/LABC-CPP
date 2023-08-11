#include <stdio.h>

int main()
{
    int amount = 500 ;

    
    int fiftyb = amount/50 ;
    int twentyb = ( amount -(50*fiftyb))/20 ;
    int fiveb  = (amount - ((20*twentyb) + (50*fiftyb))) /5 ;
    int oneb = (amount - ((20*twentyb) + (50*fiftyb) + (5*fiveb)));
    printf("1: %d\n",oneb) ;
    printf("5: %d\n",fiveb);
    printf("20: %d\n",twentyb);
    printf("50: %d",fiftyb);

    return 0;
}
