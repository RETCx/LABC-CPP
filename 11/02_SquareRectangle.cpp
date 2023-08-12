#include <iostream>
#include <cmath>
using namespace std;

class Rectangle
{
private:
    double width;
    double height;
public:
    Rectangle(double width, double height);
    double area();
    double circumference();
    double getWidth();
    double getHeight();
};

class SquareRectangle : public Rectangle 

{
private:
    double side;
public:
    SquareRectangle(double side);
    double getSide();
};

Rectangle::Rectangle(double width, double height){
        this->width = width ;
        this->height = height;
}
//เหมือน line 18 ต้องเอา class ของ Rectangle มาด้วย
/*โค้ดนี้เป็นการกำหนดคอนสตรักเตอร์สำหรับคลาส SquareRectangle ซึ่งรับพารามิเตอร์เดียว ชื่อว่า side
ส่วนที่มีเครื่องหมาย : ตามหลังการประกาศคอนสตรักเตอร์เป็น constructor initializer list ซึ่งใช้สำหรับเรียกใช้คอนสตรักเตอร์ของคลาสหลัก (คลาส Rectangle ในที่นี้) โดยส่งพารามิเตอร์ที่ให้มาด้วย

บรรทัด Rectangle(side, side) ใน constructor initializer list ก็จะเป็นการเรียกใช้คอนสตรักเตอร์ของคลาส Rectangle โดยส่งพารามิเตอร์ side สองตัว ซึ่งจะกำหนดค่า width และ height ของออบเจ็กต์ Rectangle เป็น side ด้วย นั่นคือการกำหนดส่วนของคลาสฐานสำหรับออบเจ็กต์ SquareRectangle

ส่วนบรรทัด this->side = side; ในส่วนของโค้ดที่เหลือจะเป็นการกำหนดค่า member variable ของ SquareRectangle ชื่อ side เป็นค่าของพารามิเตอร์ side ซึ่งจะกำหนดส่วนของคลาสลูกสำหรับออบเจ็กต์ SquareRectangle

ดังนั้น คอนสตรักเตอร์ของ SquareRectangle นี้จะทำการกำหนดค่าส่วนของคลาสฐาน Rectangle ด้วยพารามิเตอร์ side สองตัว และกำหนดค่าส่วนของคลาสลูก SquareRectangle ด้วยพารามิเตอร์ side ตัวเดียว*/
SquareRectangle::SquareRectangle(double side):Rectangle(side,side){
    this->side = side ;
}

double Rectangle::area(){return width*height;}

double Rectangle::circumference(){return (2*width) + (2*height);}

double Rectangle::getHeight(){return height;}

double Rectangle::getWidth(){return width;}

double SquareRectangle::getSide(){
    return side ;
}



int main()
{
    int tc;
    double width, height;
    double side;
    Rectangle rectangle(0, 0);
    SquareRectangle sqRec(0);
    cin >> tc;
    switch (tc) {
        case 1:
            cin >> width;
            cin >> height;
            rectangle = Rectangle(width, height);
            cout << "Rectangle" << endl;
            cout << "Width: " << rectangle.getWidth() << endl;
            cout << "Height: " << rectangle.getHeight() << endl;
            cout << "Area: " << rectangle.area() << endl;
            cout << "Circumference: " << rectangle.circumference() << endl;
        break;

        case 2:
            cin >> side;
            sqRec = SquareRectangle(side);
            cout << "Square Rectangle" << endl;
            cout << "Width: " << sqRec.getWidth() << endl;
            cout << "Height: " << sqRec.getHeight() << endl;
            cout << "Side: " << sqRec.getSide() << endl;
            cout << "Area: " << sqRec.area() << endl;
            cout << "circumference: " << sqRec.circumference() << endl;
        break;
    }
}