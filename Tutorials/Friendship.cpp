#include <iostream>
using namespace std;

class RectangleFriend{
	int width,height;
	public:
		RectangleFriend(){}
		RectangleFriend(int x,int y): width(x),height(y){}
		int area(){ return width*height;}
		friend RectangleFriend duplicate(const RectangleFriend&);
};

//friend function
RectangleFriend duplicate(const RectangleFriend& param)
{
	RectangleFriend res;
	res.width=param.width*2;
	res.height=param.height*2;
	return res;
}

//friend class

int main(){
	RectangleFriend foo;
	RectangleFriend bar(2,3);
	foo=duplicate(bar);
	cout<< foo.area()<<'\n';
}
