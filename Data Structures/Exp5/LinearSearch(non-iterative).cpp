#include <iostream>
using namespace std;

int search(int arr[], int size, int k)
{
	for (int i = 0; i < size; i++)
		if (arr[i] == k)
			return i;
	return -1;
}


int main(){
	int size;
	cout<<"Enter the size of array: ";
	cin>>size;	
	int arr[size];
	cout<<"\nEnter the array elements:-"<<endl;
	for (int i=0; i<size; i++){
		cout<<"Enter Number "<<i+1<<": ";
		cin>>arr[i];
	}
	
	cout<<"Unsorted Array:-"<<endl;
	for (int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	
	for (int i=0; i<size; i++){
		for (int j=i+1; j<size; j++){
			if(arr[i]>arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;			
			}

		}
	}
	
	cout<<"\nSorted Array:-"<<endl;
	for (int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	
	int k;
	cout<<"\nEnter the number you want to search: ";
	cin>>k;	

	int result = search(arr, size, k);
	if (result == -1){
		cout << "\nElement is not present in array"<<endl;
	}
	else{
		cout << "\nElement is present at index " << result<<endl;	
	}
	 
	return 0;
}
