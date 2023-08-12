#include <iostream>
using namespace std ;


class Student{
    private:
        string id;
        int score;

    public:
        Student(){}// default con struct
        explicit Student(string id , int score){
            ///this is pointer 
            this->id = id;
            this->score = score ;

        }

        Student(string id){
            this->id = id;
            score = 0;
        }//overode

        // const คิอ ไม่เปลี่ยนค่า แต่ไม่ำเป็นต้องใส่ //getter
        string getID() const {return id;}
        int getScore() const{return score;}

        //setter
        void setScore(int score){this->score = score;}
};


int main(){
    Student s1("65441515000",181);
    Student s2("59645465465");

    Student *s2ptr = &s2 ;
    Student &s2ref = s2 ;
    cout << s1.getID() << " " << s1.getScore() << endl;
    cout << s2.getID() << " " << s2.getScore() << endl;

    /*--------------------------------------------------*/
    s2ptr->setScore(21);
    cout << s2ptr->getID() << " " << s2ptr->getScore() << endl;
    s2ref.setScore(21+35);
    cout << s2ref.getID() << " " << s2ref.getScore() << endl;

    /*--------------------------------------------------*/

    Student *s3 = new Student("99999999999",99);//เก็บที่ heap
    /*ืnew is pointer*/
    cout << s3->getID() << " " << s3->getScore() << endl;

    delete s3;



}