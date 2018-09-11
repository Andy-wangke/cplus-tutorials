#include <iostream>
#include <new>

using namespace std;

void memory(){
	int i,n;
	int * p;
	cout<< "How many numbers do you want to type?";
	cin>> n;
	p=new (nothrow) int[n];//when memory allocation fails,instead of throwing a bad_alloc exception,the pointer return a null pointer
	if(p==nullptr)//NPE
		cout<<"Error:memory could not be allocated";
	else
	{
		for(i=0;i<n;i++){
			cout<<"Enter Number:";
			cin>>p[i];
		}
		cout<<"You have entered:";
		for(i=0;i<n;i++)
			cout<<p[i]<<',';
			
		delete[] p;
	}
}

//int main(){
//	memory();
//	return 0;
//}
