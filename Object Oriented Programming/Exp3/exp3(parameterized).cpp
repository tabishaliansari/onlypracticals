#include <iostream>
#include <string>
using namespace std;

class student{
    int student_roll;
    string student_name,student_branch,student_address;
    public:
        student() {
    		cout<<"Hello, this program contains student details."<<endl;
		}
		
        student(int,string,string,string);
        
        void printData();
};

student :: student(int roll,string name,string branch,string address){
    student_roll = roll;
    student_name = name;
    student_branch = branch;
    student_address = address;
}

void student :: printData(){
    cout<<"Student Roll No.: "<<student_roll<<endl<<"Student Name: "<<student_name<<endl;
    cout<<"Student Branch: "<<student_branch<<endl<<"Student Address: "<<student_address<<endl;
}

int main(){
    student s1(137,"Sushant","Artifical intelligence & Data science","Dighi, Pune-15");
    cout<<"The details of student are:-"<<endl;
    s1.printData();

    return 0;
}
