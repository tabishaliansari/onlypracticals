//Documentation:A-68 Sushant Shinde
#include <iostream>
using namespace std;

int main(){
	cout<<"A-68 Sushant Shinde \n"<<endl;
	int n;
	cout<<"Enter the size of your number series: ";
	cin>>n;
	cout<<"\n";
	int series[n];
	for(int i=0;i<n;i++){
		printf("Enter number %d : ",i+1);
		cin>>series[i];
	}
	
	cout<<"\n";
	cout<<"The given Series of numbers is: \n";
	for(int i=0;i<n;i++){
		cout<<series[i]<<" ";
	}
	
	cout<<"\n";
	cout<<"The Even Series of numbers is: \n";
	for(int i=0;i<n;i++){
		if(series[i]%2==0){
			cout<<series[i]<<" ";
		}
	}
	
	cout<<"\n";
	cout<<"The odd Series of numbers is: \n";
	for(int i=0;i<n;i++){
		if(series[i]%2!=0){
			cout<<series[i]<<" ";
		}	
	}	
	return 0;	
}


