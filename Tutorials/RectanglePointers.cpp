//pointer to class example
#include <iostream>

using namespace std;

class RectanglePoint{
	int width,height;
	public:
		RectanglePoint(int x,int y): width(x),height(y){}
		int area(void){return width*height;}
};

//int main(){
//	RectanglePoint obj(3,4);
//	RectanglePoint *foo,*bar,*baz;
//	foo=&obj;
//	bar=new RectanglePoint(5,6);
//	baz=new RectanglePoint[2]{{2,3},{4,5}};
//	cout<< "obj's area ->" <<obj.area() <<'\n';
//	cout<< "*foo's area ->" << foo->area() <<'\n';
//	cout<< "*bar's area ->" <<(*bar).area() <<'\n';
//	cout<< "baz[0]'s area ->"<<baz[0].area()<<'\n';
//	cout<< "baz[1]'s area ->"<<baz[1].area()<<'\n';
//	delete bar;
//	delete[] baz;
//	return 0;
//}

