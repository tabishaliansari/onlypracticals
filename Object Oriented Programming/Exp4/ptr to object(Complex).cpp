#include <iostream>
using namespace std;

class complex{
	int real,imaginary;
	public:
		void setData(int v1,int v2){
			real=v1;
			imaginary=v2;
		}
		void printComplex(){
			cout<<"The complex number given is "<<real<<" + "<<imaginary<<"i"<<endl;
		}
		void setSumbyComplex(complex o1,complex o2){
			real=o1.real+o2.real;
			imaginary=o1.imaginary+o2.imaginary;
		}
		void printSumComplex(){
			cout<<"The sum of the complex no. is "<<real<<" + "<<imaginary<<"i"<<endl;
		}
};

int main(){
	complex c1,c2;
	complex *ptr1=&c1;
	complex *ptr2=&c2;
	(*ptr1).setData(1,2);
	(*ptr2).setData(3,4);
	(*ptr1).printComplex();
	(*ptr2).printComplex();
	
	complex *ptr3 = new complex;
	ptr3->setSumbyComplex(c1,c2);
	ptr3->printSumComplex();
	
	return 0;
}
