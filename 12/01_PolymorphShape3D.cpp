#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

class Shape3D
{
public:
//The keyword virtual in C++ is used to declare a member function in a base class that can be overridden in a derived class.
// When a virtual function is called through a pointer or reference to the base class,
// the actual derived class object to which the pointer or reference points at runtime determines which version of the function is called.
    virtual double volumn() = 0 ;
    virtual double surfaceArea() = 0 ;
};

class RightRectangularPyramid : public Shape3D 
{
    private:
        double weight ;
        double length ;
        double height ;
    public:
        RightRectangularPyramid(double w = 0 , double l = 0 , double h = 0){
            this->weight = w;
            this->length = l;
            this->height = h;

        }
        double volumn(){return (1/3.00)*length*weight*height;}
        double surfaceArea(){
            double s = (length*weight) + (((1/2.0)*weight)*sqrt(4*(height*height)+(length*length))) + (((1/2.0)*length)*sqrt(4*(height*height)+(weight*weight)));
            return s ;
        }
};

class Sphere : public Shape3D
{
    private:
        double radius;
    public:
        Sphere(double r = 0){
            this->radius = r;
        }
        double volumn(){return (4/3.0)*M_PI*(radius*radius*radius);}
        double surfaceArea(){return 4*M_PI*(radius*radius);}
};



int main()
{
	int tc;
	cin >> tc;
	if (tc == 1) {
		Shape3D **shapes = new Shape3D*[3];
		shapes[0] = new RightRectangularPyramid(1, 5.2, 7);
		shapes[1] = new Sphere(10.6);
		shapes[2] = new RightRectangularPyramid(3, 3.5, 4.13);
		for (int i = 0; i < 3; i++) {
			cout << "Volumn: " << (*shapes)->volumn() << endl;
			cout << "Surface Area: " << (*shapes)->surfaceArea() << endl;
			cout << "--------------------\n";
			*shapes++;
		}
	} else if (tc == 2) {
		RightRectangularPyramid rectangle;
		Sphere sphere;
		cout << rectangle.volumn() << endl;
		cout << rectangle.surfaceArea() << endl;
		cout << sphere.volumn() << endl;
		cout << sphere.surfaceArea() << endl;
	} else if (tc == 3) {
		RightRectangularPyramid rectangle(171.5, 45.33, 31.02);
		cout << rectangle.volumn() << endl;
		cout << rectangle.surfaceArea() << endl;
	} else if (tc == 4) {
		Sphere sphere(34.25);
		cout << sphere.volumn() << endl;
		cout << sphere.surfaceArea() << endl;
	} else if (tc == 5) {
		RightRectangularPyramid rectangle(171.5, 45.33, 31.02);
		Sphere sphere(34.25);
		Shape3D *shape = &rectangle;
		cout << shape->volumn() << " " << shape->surfaceArea() << endl;
		shape = &sphere;
		cout << shape->volumn() << " " << shape->surfaceArea() << endl;
	} else if(tc == 6) {
	}

}