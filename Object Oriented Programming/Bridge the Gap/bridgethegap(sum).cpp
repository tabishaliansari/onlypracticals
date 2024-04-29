#include<iostream>
float add(float, float);

int main(){
	float a,b,sum;
	std::cout<<"Enter Number 1: ";
	std::cin>>a;
	std::cout<<"Enter Number 2: ";
	std::cin>>b;
	sum=add(a,b);
	std::cout<<"The sum is: "<<sum<<std::endl;
	return 0;
}

float add(float num1,float num2){
	return num1+num2;
}
