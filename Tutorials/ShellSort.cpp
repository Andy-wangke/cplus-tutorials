#include <iostream>

using namespace std;

//function to sort array using shell sort
int shellsort(int arr[],int n){
	//int n=sizeof(arr)/sizeof(arr[0]);
	for(int gap=n/2;gap>0;gap/=2){//log n 
		for(int i=gap;i<n;i++){//n/2
			//do an insertion sort
			int tmp=arr[i],j;
			for(j=i;j>=gap && arr[j-gap]>tmp;j-=gap)
				arr[j]=arr[j-gap];
			arr[j]=tmp;
		}
	}
	return 0;
}

int printArray(int arr[],int n){
	//int n=sizeof(arr);//36 bytes that return the number of the array occupied
	//cout << "Array length:"<<sizeof(arr)<<"\n"; //return size of the pointer
	//cout << "Array length:"<< n<<"\n";
	for(int i=0;i<n;i++)
		cout << arr[i] <<" ";
}

//int main(){
//	
//	int arr[]={34,12, 54, 2, 3, 5, 11, 24, 35};
//	int n =sizeof(arr)/sizeof(arr[0]);//36/4
//	cout<<"Array before sorting "<<n<<": \n";
//	printArray(arr,n);
//	
//	cout<<"\nArray after sorting: \n";
//	shellsort(arr,n);
//	printArray(arr,n);
//	return 0;
//}
