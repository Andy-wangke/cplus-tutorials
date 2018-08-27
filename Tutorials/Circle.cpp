//classes and uniform initialization
#include <iostream>

using namespace std;

class Circle{
	double radius;
	public:
		Circle(double r){radius=r;}
		double circum(){return 2*radius*3.1415926;}
		double area(){ return radius*radius*3.14159265;}
		
};

class Cylinder{
	Circle base;
	double height;
	public:
		Cylinder(double r,double h):
			base(r),height(h){}
		double volume(){return base.area()*height;
		}
};
//int main(){
//	Cylinder foz(10,20);
//	Circle foo(10);
//	Circle bar=20;
//	//uniform initialization
//	Circle baz {30.0};
//	//Circle qux={40};//only supported in C++11
//	
//	cout<<"foo's circumference :" << foo.circum() <<'\n';
//	cout<<"foz's circumference :" << foz.volume()<<'\n';
//	return 0;
//}
