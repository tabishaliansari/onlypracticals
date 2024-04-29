#include <iostream>
using namespace std;

int main(){
	float num1,num2;
	float result;
	cout<<"Enter value of num1: ";
	cin>>num1;
	cout<<"Enter value of num2: ";
	cin>>num2;
	
	try{
		if(num2==0) throw num2;
		result = num1/num2;
		cout<<"\nNum1/Num2 = "<<result;
	}
	catch(float num2){
		cout<<"Division by Zero is not possible!";
	}
	
	return 0;
}
