#include <iostream>
using namespace std;

int main(){
	int size;
	cout<<"Enter the size of the Array: ";
	cin>>size;
	int arr[size];
	
	cout<<"\nEnter the elements of Array:- "<<endl;
	
	for (int i=0; i<size; i++){
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}
	
	cout<<"Array: [ ";
	for (int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<"]"<<endl;
	
	int index, k;
	cout<<"Element to delete, k: ";
	cin>>k;
	
	for (int i=0; i<size; i++){
		if(arr[i]==k){
			index=i;
			break;
		}
	}
	
	cout<<"Index of 'k': "<<index<<endl;
	
	for (int i = index; i<=size; i++ ){
		arr[i]=arr[i+1];
	}

	
	cout<<"Array after deletion: [ ";
	for (int i=0; i<size-1; i++){
		cout<<arr[i]<<" ";
	}
	cout<<"]";
	
	return 0;
}
