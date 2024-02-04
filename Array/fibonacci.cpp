#include<iostream>
using namespace std;

int main(){
	
	int a=0,b=1,n,fib=1;
	cout<<"Enter Number :\n";
	cin>>n;
	
	cout<<"Numbers Are :\n";
	cout<<a<<"\n";
	cout<<b<<"\n";
	
	for(int i=1;i<=n;i++){
		
		cout<<fib<<"\n";
		a=b; b=fib; fib=a+b;
		
		
	}
	
	cout<<"answer IS :"<<fib;
	
	return 0;
}