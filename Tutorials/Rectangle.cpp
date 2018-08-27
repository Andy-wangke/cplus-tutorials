//Entrance
#include <iostream>

using namespace std;

class Rectangle{
	int width,height;
	public:
		Rectangle();
		Rectangle(int,int);
		void set_values(int,int);
		int area(){
			return width*height;
		}
};

Rectangle::Rectangle(){
}
//Rectangle::Rectangle(int a,int b){
//	width=a;
//	height=b;
//}
//member initialization
Rectangle::Rectangle(int x,int y):width(x){
	height=y;
}
void Rectangle::set_values(int x,int y){
	width=x;
	height=y;
}

//int main()
//{
//	std::cout << "Hello world!" <<std::endl;
//	Rectangle rect,rectb;
//	rect.set_values(3,4);
//	rectb.set_values(5,6);
//	Rectangle rectc(7,8);
//	cout << "area: "<< rect.area() <<endl;
//	cout<< "rectb area: "<<rectb.area() <<endl;
//	cout<< "rectc area:" <<rectc.area() <<endl;
//	return 0;
//}
