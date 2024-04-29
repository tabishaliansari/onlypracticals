#include <iostream>
using namespace std;
void swap_num(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}
void Bubblesort(int arr[],int size){
	for (int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){
			if(arr[i]>arr[j]){
				swap_num(arr[i], arr[j]);
			}
		}
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
	
	Bubblesort(arr,size);
	cout<<endl;
	cout<<"Array(after sorting):";
	for (int i = 0; i<size; i++){
		cout<<" "<<arr[i];
	}
	return 0;	
}


