#include <iostream>

using namespace std;

double sum( double (*f)(int), int lower, int upper )
{
	double result = 0;
	for( int i = lower; i <= upper; i++)
	result += (*f)(i);
	return result;
}
double f1( int x )
{
	return x * 7;
}
double f2( int y )
{
	return (double) y / 5;
}
//int main(){
//	cout<<sum( f1, 1, 5 )<<endl;
//	cout<<sum( f2, 2, 4 )<<endl;
//	return 0;
//}
int addition(int a,int b){
	return (a+b);
}
int subtraction(int a,int b){
	return (a-b);
}

int operation(int x,int y,int (*functocall)(int,int))
{
	int g;
	g=(*functocall)(x,y);
	return (g);
}

//int main(){
//	int m,n;
//	int (*minus)(int,int) = subtraction;
//	
//	m=operation(7,5,addition);
//	n=operation(20,m,minus);
//	
//	cout<<n;
//	return 0;
//}
