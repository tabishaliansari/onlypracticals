#include <iostream>
using namespace std;

class num2;
class num1{
	int a;
	public:
		void getA();
		friend void max(num1, num2);
};

class num2{
	int b;
	public:
		void getB();
		friend void max(num1, num2);
};

void num1::getA(){
	cout<<"Enter first number: ";
	cin>>a;
}

void num2::getB(){
	cout<<"Enter second number: ";
	cin>>b;
}

void max(num1 n, num2 m){
	if(n.a > m.b){
		cout<<n.a<<" is greater than "<<m.b<<".";
	}
	else if(n.a < m.b){
		cout<<m.b<<" is greater than "<<n.a<<".";
	}
	else{
		cout<<"Both numbers are equal.";
	}
}
int main(){
	num1 obj1;
	num2 obj2;
	obj1.getA();
	obj2.getB();
	max(obj1, obj2);
	
	return 0;
}

