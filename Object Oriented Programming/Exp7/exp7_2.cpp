#include <iostream>
using namespace std;

double area(float s){
	cout<<"The Area of square with side "<<s<<" meters is: ";
	return s*s;
}

double area(double r){
	const double pi = 3.14159265359;
	cout<<"The area of circle is: ";
	return pi*r*r;
}
double area(double b, double h){
	cout<<"The area of triangle is: ";
	return 0.5*b*h;
}
int main(){
	
	char ch;
	while(true){
		int choice;
		cout<<"Choose 1 to find area of square, 2 to find area of circle ";
		cout<<"and 3 to find area of triangle :-"<<endl;
		cout<<"What is your choice? 1/2/3: ";
		cin>>choice;
		switch(choice){
		case 1:
			double side;
			cout<<"Enter the measure of side of the square: ";
			cin>>side;
			cout<<area(side)<<" square meters "<<endl;
			break;
		case 2:
			double radius;
			cout<<"Enter the measure of radius of circle: ";
			cin>>radius;
			cout<<area(radius)<<" square meters"<<endl;
			break;
		case 3:
			double base, height;
			cout<<"Enter the measure of base of triangle: ";
			cin>>base;
			cout<<"Enter the measure of height of height: ";
			cin>>height;
			cout<<area(base,height)<<" square meters"<<endl;
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
