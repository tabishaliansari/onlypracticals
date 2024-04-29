#include <iostream>
#include <string>
using namespace std;

class customer{
	protected:
		string name;
		string phone_no;
	public:
		customer(){
			cout<<"Enter Customer information:-"<<endl;
			cout<<"Enter the name of the customer: ";
			getline(cin, name);
			cout<<"Enter the phone No. of the customer: +91";
			getline(cin, phone_no);
		}
		void displayInfo(){ 
			cout<<"The name of the customer is "<<name<<"."<<endl;
			cout<<"The Phone No. of the customer is +91"<<phone_no<<"."<<endl;
		} 
};

class depositor : public customer{
	protected:
		int acc_no;
		double bal;
	public:	
		depositor() : customer(){
			cout<<"\nEnter Depositor information:-"<<endl;
			cout<<"Enter the Account Number: ";
			cin>>acc_no;
			cout<<"Enter the Amount to deposit: ";
			cin>>bal;
			cin.ignore();
		}
		void displayInfo(){
			customer::displayInfo();
			cout<<"Account Number:  "<<acc_no<<endl;
			cout<<"Balance: "<<bal<<endl;
		}
};

class borrower : public depositor{
	protected:
		int loan_no;
		double loan_amount;
	public:
		borrower() : depositor(){
			cout<<"\nEnter Borrower information:-"<<endl;
			cout<<"Enter the Loan number: ";
			cin>>loan_no;
			cin.ignore();
			cout<<"Enter the Loan Amount: ";
			cin>>loan_amount;
		}
		void displayInfo(){
			depositor::displayInfo();
			cout<<"Loan Number: "<<loan_no<<endl;
			cout<<"Loan Amount: "<<loan_amount<<endl;
		}
};

int main(){
	customer c1;
	cout<<"\nCustomer Information: "<<endl;
	c1.displayInfo();

	cout<<"\n\n******Depositor******\n"<<endl;
	depositor d1;
	cout<<"\nDepositor Information: "<<endl;
	d1.displayInfo();

	cout<<"\n\n******Borrower******\n"<<endl;
	borrower b1;
	cout<<"\nBorrower Information: "<<endl;
	b1.displayInfo();
	
	return 0;
}