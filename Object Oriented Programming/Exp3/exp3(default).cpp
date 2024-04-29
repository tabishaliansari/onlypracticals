#include <iostream>
#include <string>
using namespace std;

class student{
    int student_roll;
    string student_name,student_branch,student_address;
    public:
        student() {
    		cout<<"Hello, this program contains student details."<<endl;
    		cout<<"Enter Roll No.: ";
    		cin>>student_roll;
    		cout<<"Enter Name: ";
    		cin>>student_name;
    		cout<<"Enter Branch: ";
    		cin>>student_branch;
    		cout<<"Enter Address: ";
    		cin>>student_address;
		}
	
        void printData();
};

void student :: printData(){
	cout<<"\nThe details of student are:-"<<endl;
    cout<<"Student Roll No.: "<<student_roll<<endl<<"Student Name: "<<student_name<<endl;
    cout<<"Student Branch: "<<student_branch<<endl<<"Student Address: "<<student_address<<endl;
}

int main(){
    student s1;
    s1.printData();
     
    return 0;
}
