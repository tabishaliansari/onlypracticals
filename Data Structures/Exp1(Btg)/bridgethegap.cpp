#include <iostream>
using namespace std;

int main(){
	int i,j;
	int marks[10]={90,67,46,98,99,97,87,73,100,33};
	cout<<"The Array of marks is: "<<endl;
	for (int i=0; i<10; i++){
		cout<<marks[i]<<" ";
	}
	
	for(i=0;i<10;i++){
		for (j=i+1; j<10; j++){
			if (marks[i]>marks[j]){
			int t=marks[i];
			marks[i]=marks[j];
			marks[j]=t;
			}
		}
	}
	cout<<endl<<endl;
	cout<<"The Sorted Array of marks is: "<<endl;
	for (i=0; i<10; i++){
		cout<<marks[i]<<" ";
	}
	cout<<endl<<endl;
	cout<<"The minimum marks are: "<<marks[0]<<" and the maximum marks are: "<<marks[9]<<endl<<endl;
	
	int sum=0;
	for(i=0; i<10; i++){
		sum+=marks[i];
	}
	cout<<"The Total marks are: "<<sum<<endl;
	return 0;
}
