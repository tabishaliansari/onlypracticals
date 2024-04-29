#include <iostream>
using namespace std;

bool checkprime(int n){
	if (n<2){
		return false;
	} 
	else if (n == 2) {
		return true;
	}
	else {
		for (int i = 2; i < n; i++) {
			if (n%i==0){
				return false;
			}
		}
	}
	return true;
}

int main(){
	int num;
	cout<<"Enter Number: ";
	cin>>num;
	cout<<"Prime numbers till "<<num<<" are: [";
	for (int k=1; k<=num; k++) {
		if(checkprime(k)){
			cout<<k<<" ";
		}
	}
	cout<<"]";
	return 0;
}