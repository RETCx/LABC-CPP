#include <stdio.h>

#define BOARD_SIZE    8

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos);

int main() {
    int board[BOARD_SIZE][BOARD_SIZE] , allPiece = 0;
    for(int i = 0 ; i < BOARD_SIZE ; i++){
        for(int j = 0 ; j < BOARD_SIZE; j++){
            board[i][j] = ' ' ;
        }
    }
    scanf("%d" , &allPiece);
    int x = 0 , y = 0 ;
    char alpha[3];
    for(int i = 0 ; i < allPiece ; i++){
        scanf("\n%c(%d, %d)" , alpha , &x , &y);
        setPieceOnTable(board, alpha[0] , x, y);
    }
    printf("------------------\n");
    printf("  0 1 2 3 4 5 6 7\n");
    for(int i = 0 ; i < BOARD_SIZE ; i++){
        printf("%d" , i);
        for(int j = 0 ; j < BOARD_SIZE; j++){
            printf("|");
            printf("%c" ,board[i][j]);

        }
        printf("|");
        printf("\n");
    }
}

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos )
{
    board[yPos][xPos] = piece ;/* ตอนจัดต้องสลับ x y แถวที่y ตำแหน่งที่x */
}