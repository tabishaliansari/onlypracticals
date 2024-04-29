#include <iostream>
using namespace std;

int main(){
	int *ptr,k,i;
	int size;
	cout<<"Enter the size of array: ";
	cin>>size;
	cout<<endl;
	int arr[size];
	ptr = arr;
	for(int i=0;i<size;i++){
		cout<<"Enter number "<<i+1<<" : ";
		cin>>arr[i];
	}
	
	cout<<"Array: ";
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	
	cout<<endl<<"Enter the number to be searched: ";
	cin>>k;
	for(int i=0;i<size;i++){
		if(*ptr==k){
			cout<<"The number "<<k<<" found at index: "<<i;
			break;
		}
		ptr++;
	}
	if(i==size){
		cout<<"Number not found!!"<<endl;
	}
	return 0;
}
