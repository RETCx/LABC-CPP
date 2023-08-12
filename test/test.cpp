#include <iostream>

using namespace std;

class Book{
    private: // data member
        string name ;
        double price ;
    public:
        //default if we use Book Book1 name = a and price = 1
        Book(string n = "a" , int p = 1): name(n),price(p){} //constructor
        //member function
        string getName(){return name ;}
        double getprice(){return price;}
        double discount(double percent){return price -(price*(percent));}
        //
};

class Bookstore{
    private:
        string name ;
        string address ; 
        Book book[100];
        int size ;

};





int main(){
    // declare object and call constructor 
    Book book1("Aa",20);
    double price = book1.discount(0.1);
    cout << book1.getName() <<" "<< price << endl;
    /*---------------------------------------------*/
}