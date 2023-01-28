#include <stdio.h>
#include <stdlib.h>
int main()
{
    char stickers[100] ; char baht[1000000] ; 
    fgets(stickers, 100,stdin);
    fgets(baht,1000000,stdin);
    int stickersi = atoi(stickers);
    double bahti = atof(baht);
    int percent ;
    int stickersleft ;
    float discount ;
    if (stickersi >= 9){
        percent = 40; 
        stickersleft = stickersi - 9 ;
    }

    else if (stickersi >= 6 && stickersi < 9){
        percent = 30;
        stickersleft = stickersi - 6 ;
    }

    else if (stickersi >= 3 && stickersi < 6){
        percent = 20 ;
        stickersleft = stickersi - 3 ;
    }

    else if (stickersi == 2){
        percent = 15 ;
        stickersleft = stickersi - 2 ;
    }

    else if  (stickersi == 1 ){
        percent = 10 ;
        stickersleft = stickersi - 1 ;
    }
    else {
        percent = 0 ;
        stickersleft = stickersi ;
    }
    discount  = ((percent/100.0));
    float amount = bahti - (discount*bahti) ;
    printf("You get %d percents discount.\n",percent);
    printf("Total amount due is %.2f Baht.\n",amount);
    printf("And you have %d stickers left.",stickersleft);
    

}