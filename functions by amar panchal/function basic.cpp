//write a program to swap 2 number s using passs by value / refrence

#include<iostream>
using namespace std;

int swap(int &a, int &b){ // pass by refrrence int add(int a,int b) i.e. pass by value
	
	
    cout<<"SWAP IS : \n";
    int t=b;
    b=a;
    a=t;
    cout<<a<<" "<<b<<" "<<endl;
}

int main(){
	int a,b;
	cout<<"enter values"<<endl;
	cout<<"BESFORE\n";
	cin>>a>>b;
	cout<<"AFTER :\n";
	swap(a,b);
	
	
	return 0;
}