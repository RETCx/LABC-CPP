#include <iostream>
#include <sstream> //string stream
using namespace std ;

// define class
class Book {
    private : // data hiding (Encapsulation)
    //attribute {data member}
        string title ;
        int page;
        int readPage ;


    public:
    // method {member function}
        Book(string title , int page){ //consturtor
            this->title = title ;
            this->page = page ;
            readPage = 0 ;
            
        }

        string getTitle(){
            return title;
        }
        
        int getPage(){
            return page ;
        }
        
        int getReadpage(){
            return readPage ;

        }


        void read(int page){
            if(page > 0) {
                readPage += page ;
            }
            if(readPage > this->page ){
                readPage = this->page ;
            }
        }

        string toString(){
            stringstream ss;
            ss << "Title: " << title << endl ;
            ss << "Page: " << readPage << "/" << page << endl;
            return ss.str();
        }
};

int main(){
    // declare instance {object} [instantiate]
    Book book("Intoduction to c++",300) ;
    Book pythonBook("Python is easy",200);

    Book *gitBook = new Book("Git 101",102);

    cout << book.toString() << endl ;
    cout << pythonBook.toString() << endl ;
    cout << gitBook->toString() << endl ;

    Book *books[10] ;
    books[0] = &book ;
    books[1] = &pythonBook ;
    books[2] = gitBook ;
    books[3] = new Book("Harry Potter and Where to find them",690);

    books[3]->read(5);
    books[0]->read(132);
    books[3]->read(3);
    books[2]->read(101);
    cout << book.toString() << endl ;

    for(int i = 0 ; i < 4; i++){
        cout << books[i]->getTitle << "{" << books[i]->getPage << "pages)" << endl;
    }
    return 0 ;
}