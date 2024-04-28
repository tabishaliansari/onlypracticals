#include <iostream>
using namespace std;

int main() {

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the array elements:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i+1 << ": ";
        cin >> arr[i];
    }

    cout << "Array elements: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int key;
    cout << "Enter the key to search: ";
    cin >> key;

    int index = -1;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key) {
            index = i;
            break; 
        }
    }

    if (index != -1) {
        cout << "Key found at index " << index << endl;
    } else {
        cout << "Key not found in the array." << endl;
    }

    int countNodes = size;
    cout << "Number of nodes : " << countNodes << endl;

    return 0;
}
