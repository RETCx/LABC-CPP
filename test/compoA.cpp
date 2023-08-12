#include <iostream>

using namespace std;


class Car{


    //........
};

class Showroom{

    private:
        Car *c1 ; //composition : Showroom has a car

    public:
        Showroom(Car *c):c1(c){}

        ~Showroom() //destuctor
        {
            delete c1;
        }
};




int main(){



    Showroom *room = new Showroom(new Car());


    delete room ;


}