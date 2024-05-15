#include <stdio.h>
#define BOARD_SIZE 8

void bishopMoves(int x  , int y ,int board[][BOARD_SIZE]) {
    int i = x, j = y ; /* i คือ หลัก j คือ แถว */
    while((i > 0) && (j > 0)){ /*upleft*/
        i-- , j-- ;
        board[j][i] = 'X' ;  
    } 
    i = x, j = y ;
    while( i > 0 && j < 7){/*downleft*/
        i-- , j++ ;
        board[j][i] = 'X' ;
    } 
    i = x, j = y ; 
    while(j > 0 && i < 7){ /*upright*/
        i++, j-- ;
        board[j][i] = 'X' ;
    }
    i = x, j = y ; 
    while(j < 7 && i < 7){/*downright*/
        i++, j++ ;
        board[j][i] = 'X' ;
    }
    
}

int main() {
    int board[BOARD_SIZE][BOARD_SIZE] , x = 0 , y = 0;
    for(int i = 0 ; i < BOARD_SIZE ; i++){
        for(int j = 0 ; j < BOARD_SIZE; j++){
            board[i][j] = ' ' ;
        }
    }
    printf("Enter Bishop's X Y position: ");
    scanf("%d %d" , &x , &y);
    board[y][x] = 'B';
    bishopMoves(x,y, board);
    printf("  0 1 2 3 4 5 6 7\n");
    printf("------------------\n");
    for(int i = 0 ; i < BOARD_SIZE ; i++){
        printf("%d" , i);
        for(int j = 0 ; j < BOARD_SIZE; j++){
            printf("|");
            printf("%c" ,board[i][j]);

        }
        printf("|");
        printf("\n");
        printf("------------------\n");
    }

  

}
