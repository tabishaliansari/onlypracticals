#include <iostream>
using namespace std;

int add(int a, int b){
	cout<<a<<" + "<<b<<": ";
	return a+b;
}

int add(int a, int b, int c){
	cout<<a<<" + "<<b<<" + "<<c<<": ";
	return a+b+c;
}
int main(){
	
	char ch;
	while(true){
		int choice;
		int num1, num2, num3;
		cout<<"Choose 1 to add two numbers and 2 to add three numbers:-"<<endl;
		cout<<"What is your choice? 1/2: ";
		cin>>choice;
		switch(choice){
		case 1:
			cout<<"Enter the value of num1: ";
			cin>>num1;
			cout<<"Enter the value of num2: ";
			cin>>num2;
			cout<<add(num1, num2)<<endl;
			break;
		case 2:
			cout<<"Enter the value of num1: ";
			cin>>num1;
			cout<<"Enter the value of num2: ";
			cin>>num2;
			cout<<"Enter the value of num3: ";
			cin>>num3;
			cout<<add(num1, num2, num3)<<endl;
			break;
		default:
			cout<<"Invalid Choice. Program will end.....!";
			break;
		}
		cout<<"\nDo you want to continue? Y/N: ";
		cin>>ch;
		if (ch=='N'){
			break;
		}		
	}
	return 0;
}
