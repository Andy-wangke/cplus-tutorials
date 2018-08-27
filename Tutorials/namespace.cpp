//using namespace example
#include <iostream>

using namespace std;


namespace foo{
	const double pi = 3.1416;
	double value(){return 2*pi;}
}

namespace first{
	double pi=3.14159265;
	int x = 5;
	int y = 10;
}


int x;

//int main(){
//	int y;
//	cout<< x<< '\n';
//	cout<<y << '\n';
//	cout<<foo::pi<<'\n';
//	cout<<foo::value()<<'\n';
//	cout<<first::pi<<'\n';
//	return 0;
//}
