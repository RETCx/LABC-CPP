#include <stdio.h>
#include <string.h>
// struct studnet {
//     char firstname[30];
//     char lastname[30];
//     char id[11]; /*เก็บเป็น string ถ้าเป็นตัวเลขที่ไม่ได้นำมา +-*/
//     double score;

// typedef struct student__{
//     char name[100];
//     double score;
// } Student;
struct Book__ {
    char title[100];
    int page;//จำนวนหน้าของหนังสือ
    int readPage;//จำนวนหน้าที่อ่านแล้ว
};

typedef double dollar ;
typedef int cm; /*เป็น int แต่สร้างชื่อใหม่อาจจะเพื่อให้สอดคล้องหรือสั่นลง*/
typedef struct Book__ Book ;

void printBook(Book book){
    printf("Title: %s\n" , book.title );
    printf("Read: %d %d" , book.page , book.readPage);
}

void readBook(Book* book,int page){
    book->readPage += page ;
}
void findTopPage(Book books[] , int size , Book **topPage){
    *topPage = &books[0];
    for(int i = 1 ; i < 3 ;++i){
        if(books[i].page > (*topPage)->page){
            *topPage = &books[i];
        }
    }
}


int main()
{
    // Book book ;
    // strcpy(book.title,"In troduction to c/c++") ;
    // book.page = 780;
    // book.readPage = 0;


    // dollar price = 0.99 ;
    // cm lenght = 10 ;    
    
    // readBook(&book , 10);
    // printBook(book);
    Book books[10], *topPage;

    strcpy(books[0].title, "The 1st Book of Array");
    books[0].page = 300 ;
    strcpy(books[1].title, "The 2st Book of Array");
    books[2].page = 330 ;
    strcpy(books[2].title, "The 3st Book of Array");
    books[3].page = 250 ;
    for(int i = 0 ; i < 3 ;i++){
        books[i].readPage = 0 ;
    }
    
    findTopPage(books , 3 , &topPage);
    printBook(*topPage);
}