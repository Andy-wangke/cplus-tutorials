#include<iostream>

using namespace std;

int firstPointer(){
	int firstValue,secondValue;
	int * mypointer;
	
	mypointer=&firstValue;
	firstValue=10;
	mypointer=&secondValue;
	secondValue=20;
	cout<< "firstValue is "<< firstValue <<'\n';
	cout<< "secondValue is "<<secondValue <<'\n';
	return 0;
}

int secondPointer(){
	int firstValue=5,secondValue=15;
	int *p1,*p2;
	
	p1=&firstValue;
	p2=&secondValue;
	
	*p1=10;
	*p2=*p1;
	p1=p2;
	*p1=30;
	
	cout<<"firstValue is "<< firstValue <<'\n';
	cout<< "secondValue is "<< secondValue<<'\n';
	return 0;
}

/**

**/
int arraypointer(){
	int numbers[6];
	int * p;
	p=numbers;//default p point to numbers[0]
	*p=10;
	p++; *p=20;
	p=&numbers[2]; *p=30;
	p=numbers+3; *p=40;
	p=numbers;*(p+4)=50;
	numbers[5]=60;
	for(int n=0;n<6;n++)
		cout<< numbers[n]<<", ";
	return 0;
	
	
}

//int main(){
//	//firstPointer();
//	//secondPointer();
//	arraypointer();
//}
