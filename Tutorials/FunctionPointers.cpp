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

