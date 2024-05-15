#include <stdio.h>
int main(){
    int hour , min  ,  change_time = 0;
    char cha ;
    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    scanf("%d:%d %c" , &hour , &min , &cha);
    if (((cha == 'P') || (cha == 'p') && (hour <  12))) {
        change_time += hour  + 12 ;
    }
    else if (hour <  12 ) {
        change_time = hour;
    }
    else if (hour == 12 && ((cha == 'P') || (cha == 'p'))){
        change_time = 12 ;
    }
    printf("Equivalent 24-hour time: %02d:%02d" , change_time , min);
}