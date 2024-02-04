//swap content of  Using third variable

#include<iostream>
using namespace std;

int main(){
	int a,b;
	cout<<"enter numbers"<<endl;
	cin>>a>>b;
	cout<<"before swap"<<a<<" "<<b<<endl;
//	int temp=a;
//	a=b;
//	b=temp;
	
	a+=b; b=a-b; a-=b; // without using third variable
	
	
	
	cout<<"after swap"<<a<<" "<<b<<endl;
return 0;
}
