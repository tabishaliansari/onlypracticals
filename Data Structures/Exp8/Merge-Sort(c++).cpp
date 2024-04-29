#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high){
	int i,j,k;
	int s1 = mid-low+1;
	int s2 = high-mid;
	int L[s1],H[s2];
	
	for (i=0;i<s1;i++){
		L[i] = arr[low+i];
	}
	for (j=0; j<s2; j++){
		H[j] = arr[mid+1+j];
	}
	i=0,j=0,k=low;
	while(i<s1 && j<s2){
		if(L[i]<=H[j]){
			arr[k]=L[i];
			i++;
		}
		else{
			arr[k]=H[j];
			j++;
		}
		k++;
	}
	while(i<s1){
		arr[k]=L[i];
		i++;
		k++;
	}
	while(j<s2){
		arr[k]=H[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[], int low, int high){
	if(low<high){
		int mid = (low+high)/2;
		mergeSort(arr,low,mid);
		mergeSort(arr,mid+1,high);
		
		merge(arr, low, mid, high);
	}
}

void printArray(int A[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", A[i]); 
    printf("\n"); 
} 

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
	cout<<"Given unsorted Array:- "<<endl;
	printArray(arr,size);
	
	mergeSort(arr, 0, size-1);
	cout<<"\nSorted Array:- "<<endl;
	printArray(arr,size);
	
	return 0;
}
