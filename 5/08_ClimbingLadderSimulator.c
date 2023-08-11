#include <stdio.h>
int main(){
    printf("Input number of stairs: ");
    int num_stairs = 0 , round = 1 , step = 0 ;
    scanf("%d" , &num_stairs);
    int l[num_stairs][5] , head = num_stairs - 2 , leg = num_stairs - 1  ;
    
    
    while(1){
        for(int i = 0 ; i < num_stairs ; i++){
            for(int j = 0 ; j < 5 ; j++){
                if((j == 0) || (j == 4) ){
                    l[i][j] = '|' ;
                }
                else{
                    l[i][j] = '-' ;
                }
            }
        } /*เป็นการสร้างบรรได ซึ่ง ความยาวของแต่ละขั้นมีค่ากำหนดชั้นเจน คือ 5 ในอาเรย์ คือ 0 - 4 , num_stairs คือ ความสูงของบรรได*/
        l[leg][2] = '^' , l[head][2] = 'O';  
        printf("---- round %d ----\n" , round);
        round++ ;
        for(int i = 0 ; i < num_stairs ; i++){
            for(int j = 0 ; j < 5 ; j++){
                printf("%c" , l[i][j]);
            }
            printf("\n");
        }/*แสดงบรรได*/

        printf("Input step command: ");

        scanf("%u" , &step ) ;
        if(step == 0){
            break; }
        else{
            step -= 2*step ;
            // printf("%d\n",step);
            
            // printf("%d head" , head);
            if((step < 0) && ((head > 0))){
                leg += step , head += step;
                if(head < 0){
                    head = 0 , leg = 1 ;
                }
            }
            else if (step > 0){
                leg += step , head += step;
                if(leg > (num_stairs - 1)){
                    head = num_stairs - 2 , leg = num_stairs - 1 ;
                }

            }
            
        }

        
    }
    return 0 ;
}