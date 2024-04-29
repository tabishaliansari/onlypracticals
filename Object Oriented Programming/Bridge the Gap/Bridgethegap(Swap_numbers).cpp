#include <iostream>
using namespace std;

void swap(int &num1, int &num2){
	cout<<"Value before swap:-"<<endl;
	cout<<"A = "<<num1<<endl;
	cout<<"B = "<<num2<<endl;
	
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout<<"Value after swap:-"<<endl;
	cout<<"A = "<<num1<<endl;
	cout<<"B = "<<num2<<endl;	
}

int main(){
	int a,b;
	cout<<"Enter the value of a: ";
	cin>>a;
	cout<<"Enter the value of b: ";
	cin>>b;
	
	swap(a,b);
	
	return 0;
}

