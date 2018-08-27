//overloading operators example

#include <iostream>
using namespace std;

class CVector{
	public:
		int x,y;
		CVector(){};
		CVector(int a,int b):x(a),y(b){};
		bool isitme(CVector& param);
		//overloading operators as a member function
		CVector operator+ (const CVector&);
		CVector& operator=(const CVector&);
};

CVector CVector::operator+ (const CVector& param){
	CVector temp;
	temp.x=x+param.x;
	temp.y=y+param.y;
	return temp;
}
CVector& CVector::operator = (const CVector& param){
	x=param.x;
	y=param.y;
	return *this;
}

bool CVector::isitme(CVector& param){
	if(&param ==this) return true;
	else return false;
}

class CVector_dummy{
	public:
		int x,y;
		CVector_dummy(){};
		CVector_dummy(int a,int b):x(a),y(b){};
};

CVector_dummy operator+(const CVector_dummy& lhs,const CVector_dummy& rhs){
	CVector_dummy temp;
	temp.x=lhs.x+rhs.x;
	temp.y=lhs.y+rhs.y;
	return temp;
}

//int main(){
//	//member function example
//	cout<<"-------member function example-------"<<endl;
//	CVector foo(3,1);
//	CVector bar(1,2);
//	CVector result,result_2;
//	result=foo+bar;
//	result_2=foo.operator+ (bar);
//	
//	
//	cout<<result.x<<","<<result.y<<"\n";
//	cout<<result_2.x<<","<<result_2.y<<"\n";
//	
//	cout<<"check if a parameter passed to a member function is the object self-->";
//	CVector a;
//	CVector* b=&a;
//	if(b->isitme(a))
//		cout<<"yes,&a is b\n";
//	//cout<<"operator= is "<<(foo=bar)<<'\n';
//	
//	cout<<"-------non_member function example-------"<<endl;
//	//non-member function example
//	CVector_dummy foo2(3,1);
//	CVector_dummy bar2(1,2);
//	CVector_dummy result_3,result_4;
//	result_3=foo2+bar2;
//	//result_4=foo2.operator+ (bar2);
//	
//	cout<<result_3.x<<","<<result_3.y<<"\n";
//	cout<<result_4.x<<","<<result_4.y<<"\n";//TODO:random value
//	
//	
//	return 0;
//	
//}




