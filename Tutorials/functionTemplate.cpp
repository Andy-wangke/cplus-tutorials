//function template

#include <iostream>

using namespace std;

template <class T>
T sum(T a,T b){
	T result;
	result=a+b;
	return result;
}

template <class T,class U>
bool equals(T a,U b){
	return (a==b);
}

template <class T,int N>
T fixed_multiply(T val){
	return val*N;
}


//int main(){
////	int i=5,j=6,s;
////	double f=2.0,g=0.5,h;
////	s=sum<int>(i,j);
////	h=sum<double>(f,g);
////	cout << s<<'\n';
////	cout<< h<<'\n';
////	
////	if(equals(10,10.00))
////		cout<<"x and y are equal\n";
////	else
////		cout<<"x and y are not equal.\n";
//	cout << fixed_multiply<int,2>(10)<<'\n';
//	cout << fixed_multiply<int,3>(10) << '\n';	
//	return 0;
//}
