#include <iostream>

using namespace std;



/**
void pointer


*/
void increase(void * data,int psize){
	if(psize== sizeof(char)){
		char * pchar;pchar=(char*) data;++(*pchar);
	}else if(psize==sizeof(int)){
		int* pint; pint=(int*) data;(*pint)++;
	}	
	
}

//int main(){
//	char a='x';
//	int b=1000;
//	
//	increase(&a,sizeof(a));
//	increase(&b,sizeof(b));
//	
//	cout<< a <<","<<b<<'\n';
//	return 0;
//}
