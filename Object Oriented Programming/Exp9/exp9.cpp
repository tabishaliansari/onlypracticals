#include <iostream>
#include <string>
using namespace std;

class Student{
	protected:
		string Name;
		int RollNo;
		
	public:
		void set_details(){
			cout<<"Enter Your Roll no.: ";
			cin>>RollNo;
			cout<<"Enter You Name : ";
			cin>>Name;
		}
		void display_details(){
			cout<<"Your roll no is "<<RollNo<<endl;
			cout<<"Your name is "<<Name<<endl;
		}
};

class Academic : virtual public Student{
	protected:
		int DS, OOP, DMS, SE, JCP;
	public:
		void set_marks(){
			cout<<"\nEnter Academic Details:-"<<endl;
			cout<<"Enter DS marks: ";
			cin.ignore();
			cin>>DS;
			cout<<"Enter OOP marks: ";
			cin>>OOP;
			cout<<"Enter DMS marks: ";
			cin>>DMS;
			cout<<"Enter SE marks: ";
			cin>>SE;
			cout<<"Enter JCP marks: ";
			cin>>JCP;
		}
		void display_marks(){
			cout<<"\nYou Academic result is here:-"<<endl;
			cout<<"DS Marks: "<<DS<<endl;
			cout<<"OOP Marks: "<<OOP<<endl;
			cout<<"DMS Marks: "<<DMS<<endl;
			cout<<"SE Marks: "<<SE<<endl;
			cout<<"JCP Marks: "<<JCP<<endl;
			cout<<"Total Academic Marks: "<<DS+OOP+DMS+SE+JCP<<endl;
		}
}; 

class Sports : virtual public Student{
	protected:
		int theory, physical;
	public:
		void set_score(){
			cout<<"\nEnter Sports Details:-"<<endl;
			cout<<"Enter theory marks: ";
			cin>>theory;
			cout<<"Enter physical marks: ";
			cin>>physical;
		}
		void display_score(){
			cout<<"\nYou Sports result is here:-"<<endl;
			cout<<"Theory Marks: "<<theory<<endl;
			cout<<"Physical Marks: "<<physical<<endl;
			cout<<"Total Sports Marks: "<<theory+physical<<endl;
		}
};

class Marksheet : public Academic, public Sports{
	private:
        float total;
    public:
        void display(){
            total = DS+OOP+DMS+SE+JCP+theory+physical;
            display_details();
            display_marks();
            display_score();
            cout<< "\nYour overall score is: "<<total<<endl;
        }
};

int main(){
	Marksheet sushant;
	sushant.set_details();
    sushant.set_marks();
    sushant.set_score();             
    sushant.display();
    
    return 0;
}
