#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

typedef struct _point {
    double xPosition;
    double yPosition;
} point;

class Circle{
    private :
        point center ;
        double radius ;

    public : 
        Circle(point center ,double radius  ){
            this->center.xPosition = center.xPosition ;
            this->center.yPosition = center.yPosition ;
            this->radius = radius ;
        }

        double area(){
            return M_PI * (radius * radius) ;
        }
        double distanceFromCenter(point pt){
            double dx = pt.xPosition - center.xPosition;
            double dy = pt.yPosition - center.yPosition;
            return sqrt(dx * dx + dy * dy);
        }
        bool contains(point pt){
            if(distanceFromCenter(pt) > radius){
                return false ;
            }
            return true ;
        }

};



int main()
{
    point centerOfC , Cpoint ;
    double radius ;
    cout << "Center of Circle: " ;
    cin >> centerOfC.xPosition >> centerOfC.yPosition ;
    cout << "Radius of Circle: " ;
    cin >>  radius ;
    cout << "Point to Check: ";
    cin >> Cpoint.xPosition >> Cpoint.yPosition ; 
    Circle Circle(centerOfC,radius);
    cout << "Area of Circle is " << Circle.area() << endl ;
    cout << "Distance from Center to Point " <<"("<< Cpoint.xPosition <<", " << Cpoint.yPosition << ")"  
        << " is " << Circle.distanceFromCenter(Cpoint) << endl  ;
    if(Circle.contains(Cpoint)){
        cout << "This circle contains this point." ;
    }
    else{
        cout << "This point is not in this circle." ;
    }


   
   

}