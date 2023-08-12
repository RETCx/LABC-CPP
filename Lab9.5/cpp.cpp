#include <iostream>
using namespace std ; // ไม่จำเป็นต้องใส่ std ด้านหน้าแล้ว
int main(){
    bool is = true ; //มี true and false ใ้ห้ใช้
    int number ;
    float price ;
    std:: string name ;
    std::cin >> number ; // console input ;
    std::cin >> price ;
    std::cin >> name ;
    name += " Parker" ;
    // cout : console output
    // << stream insertion operator
    if(name == "Peter"){
        std::cout << "yes" << std::endl ; 
    } 
    std::cout << "hello C++" << (100 << 10) ;
    std::cout << std::endl; // endl ; end line 

    return 0 ;
}