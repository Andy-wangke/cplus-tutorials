#include <iostream>

using namespace std;


//divide-and-conquer
template<class T>
void merge( T ar[], T temp[], int lPos, int rPos, int rEnd )
{
	int lEnd = rPos - 1,
	    tempPos = lPos,
	    numElem = rEnd - lPos + 1;
	
	while( lPos <= lEnd && rPos <= rEnd )
	  if( ar[lPos] <= ar[rPos] )
	    temp[tempPos++] = ar[lPos++];
	  else
	    temp[tempPos++] = ar[rPos++];
	
	while( lPos <= lEnd )//copy rest of left half
	  temp[tempPos++] = ar[lPos++];
	
	while( rPos <= rEnd )//copy rest of right half
	  temp[tempPos++] = ar[rPos++];
	
	for( int i = 0; i < numElem; i++, rEnd-- )
	  ar[rEnd] = temp[rEnd];
}

template<class T>
void mergeSort( T ar[], T temp[], int left, int right )
{
	if( left < right )
	  {
	  int center = (left + right) / 2;
	  
	  
	  mergeSort( ar, temp, left, center );
	
	  mergeSort( ar, temp, center+1, right );
	  
	  merge( ar, temp, left, center+1, right);
	  }
}

template<class T>
void mergeSort( T ar[], int size)
{
	T *tempArray = new T[size];
	
	mergeSort( ar, tempArray, 0, size-1 );
}

int printArr(int arr[],int n){
	//int n=sizeof(arr);//36 bytes that return the number of the array occupied
	//cout << "Array length:"<<sizeof(arr)<<"\n"; //return size of the pointer
	//cout << "Array length:"<< n<<"\n";
	for(int i=0;i<n;i++)
		cout << arr[i] <<" ";
}

//int main(){
//	int a []= {2, 6, 3, 5, 1,11,7,0};
//	int size=sizeof(a)/sizeof(a[0]);
//	mergeSort(a,size);
//	
//	printArr(a,size);
//	
//	return 0;
//}
