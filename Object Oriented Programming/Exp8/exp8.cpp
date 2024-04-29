#include <iostream>
#define PI 3.14159
using namespace std;

class shape{
	protected:
		double x, y;
	public:
		void getData(){
			cout<<"Enter the value of x: ";
			cin>>x;
			cout<<"Enter the value of y: ";
			cin>>y;
		}
		virtual void showArea()=0;
};

class triangle : public shape{
	public:
		void showArea(){
			cout<<"\nThe Area of the triangle is "<<0.5*x*y<<endl;
		}
};

class rectangle : public shape{
	public:
		void showArea(){
			cout<<"\nThe Area of the Rectangle is "<<x*y<<endl;
		}
};

class circle : public shape{
	public:
		void showArea(){
			cout<<"\nThe Area of the Circle(x taken as radius) is "<<PI*x*x<<endl;
			cout<<"\nThe Area of the Circle(y taken as radius) is "<<PI*y*y<<endl;
		}
};

int main(){
	shape *ptr[3];
	triangle t;
	rectangle r;
	circle c;
	
	while(true){
		char choice;
		cout<<"Enter your choice: A-Triangle/B-Rectangle/C-Circle "<<endl;
		cin>>choice;
		switch(choice){
			case 'A':
				ptr[0]=&t;
				ptr[0]->getData();
				ptr[0]->showArea();
				break;
			case 'B':
				ptr[1]=&r;
				ptr[1]->getData();
				ptr[1]->showArea();
				break;
			case 'C':
				ptr[2]=&c;
				ptr[2]->getData();
				ptr[2]->showArea();
				break;
			default:
				cout<<"Invalid Choice!!"<<endl;
				break;
		}
		char repeat;
		cout<<"\nDo you want to repeat? Y/N"<<endl;
		cin>>repeat;
		if(repeat=='N'){
			break;
		}
	}
}
