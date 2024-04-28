#include <iostream>
using namespace std;

int main(){
	int size;
	cout<<"Enter the size of the Array: ";
	cin>>size;
	int arr[size];
	
	cout<<"\nEnter the elements of Array(enter only "<<size-1<<" elements):- "<<endl;

	for (int i=0; i<size-1; i++){
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}

	
	cout<<"array: [ ";
	for (int i=0; i<size-1; i++){
		cout<<arr[i]<<" ";
	}
	cout<<"]"<<endl;
	
	int position, k;
	cout<<"Element to insert, k: ";
	cin>>k;
	cout<<"Enter the position where u want to insert 'k': ";
	cin>>position;
	
	for (int i = size; i>=position; i-- ){
		arr[i]=arr[i-1];
	}
	arr[position]=k;
	
	cout<<"array after inserting element: [ ";
	for (int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<"]";
	
	return 0;
}
