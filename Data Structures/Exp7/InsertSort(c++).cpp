#include <iostream>
using namespace std;

void insertionSort(int arr[],int size){
	for (int i=1; i<size; i++){
		int k=arr[i];
		int j=i-1;
		while((j>=0) && (k<arr[j])){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=k;
	}
}

int main(){
	int size,arr[size];
	cout<<"Enter the size of array: ";
	cin>>size;
	cout<<"Enter the elements of array: "<<endl;
	for (int i = 0; i<size; i++){
		cout<<"Enter Element "<<i+1<<": ";
		cin>>arr[i];
	}
	cout<<endl;
	cout<<"Array(before sorting):";
	for (int i = 0; i<size; i++){
		cout<<" "<<arr[i];
	}	
	
	insertionSort(arr,size);
	cout<<endl;
	cout<<"Array(after sorting):";
	for (int i = 0; i<size; i++){
		cout<<" "<<arr[i];
	}
	return 0;	
}



