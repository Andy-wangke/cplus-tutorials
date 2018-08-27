#include<iostream>

using namespace std;


//class template 
template <class T>
class mypair{
	T values [2];
	public:
		mypair(T first,T second)
		{
			values[0]=first;
			values[1]=second;
		}
		T getMax();
};

template <class T>
T mypair<T>::getMax()//
{
	T retval;
	retval = values[0]>values[1]?values[0]:values[1];
	return retval;
}


//template specialization
template <class T>
class mycontainer{
	T element ;
	public:
		mycontainer(T arg){element=arg;}
		T increase(){++element;}
};

template<>
class mycontainer<char>{
	char element;
	public:
		mycontainer(char arg){element=arg;}
		char uppercase(){
			if((element>='a')&&(element<='z')){
				element+='A'-'a';	
			}
			return element;
		}
};

//int main(){
//	mypair<int> myobject(200,75);
//	cout<< myobject.getMax()<<endl;
//	
//	//mycontainer<int> myint(7);
//	mycontainer<char> mychar('j');
//	
//
//	cout<<mychar.uppercase()<<'\n';
//	return 0;
//}
