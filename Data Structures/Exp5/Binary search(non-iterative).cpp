#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int k)
{
	while (low <= high) {
		int mid = (low + high) / 2;

		if (arr[mid] == k)
			return mid;

		if (arr[mid] < k)
			low = mid + 1;

		else
			high = mid - 1;
	}

	return -1;
}

int main()
{
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;

	int arr[n];
	cout<<"\nEnter the elements of array:-\n";
	for(int i=0; i<n; i++){
		cout<<"Enter element "<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<"Given Array is: ";
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	int k;
	cout<<"\nEnter the element to check: ";
	cin>>k;
	int result = binarySearch(arr, 0, n - 1, k);
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result;
	return 0;
}
