#include <iostream>
using namespace std;

double volume(double s){
	cout<<"The volume of cube with side "<<s<<" meters is: ";
	return s*s*s;
}

double volume(double r, double h){
	const double pi = 3.14159265359;
	cout<<"The volume of cylinder is: ";
	return (pi*r*r*h);
}
int main(){
	
	char ch;
	while(true){
		int choice;
		cout<<"Choose 1 to find volume of cube and 2 to find volume of cylinder:-"<<endl;
		cout<<"What is your choice? 1/2: ";
		cin>>choice;
		switch(choice){
		case 1:
			double side;
			cout<<"Enter the value of sides of the cube: ";
			cin>>side;
			cout<<volume(side)<<" cubic meters."<<endl;
			break;
		case 2:
			double radius, height;
			cout<<"Enter the value of radius of cylinder: ";
			cin>>radius;
			cout<<"Enter the value of height of cylinder: ";
			cin>>height;
			cout<<volume(radius, height)<<" cubic meters."<<endl;
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
