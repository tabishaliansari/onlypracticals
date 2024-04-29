#include <iostream>
using namespace std;

int findfact(int x){
	int fact=1;
	for(int i=1; i<=x; i++){
		fact*=i;
	}
    return fact ;
}

int main(){
    int (*funcptr)(int);

    funcptr = findfact;
	
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	
    int findfact = funcptr(n);

    cout<<"The factorial of "<<n<<" is: "<<findfact<<endl;
    return 0;
}