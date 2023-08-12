#include <iostream>

using namespace std;


class Car{


    //........
};

class Showroom{

    private:
        //Car *cars[10] เขียนงี้ได้ แต่จะ lock ไว้ 10อัน 
        Car **cars ; //เพื่่อ สร้าง array
        int size ;

    public:
        Showroom(){
            cars = new Car*[10];
            size = 0 ;
        }

        ~Showroom() //destuctor
        {
            for(int i = 0 ; i < size ; i++){
                    
                delete car[i];
            }
        }
};




int main(){



    


}