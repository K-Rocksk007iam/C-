#include<iostream>
using namespace std;

int main(){
	
	
	int num,a=0;
	cout<<"Write th value of num : ";
	cin>>num;
	
	cout<<" Even series is :\n";
	while(num>=a){
		
		cout<<num<<"\n ";
		num=num-2;
	}
	
	
	cout<<"Write th value of num : ";
	cin>>num;
	cout<<" ODD series is :\n";
	while(num>=a){
		
		cout<<num<<"\n";
		num=num-2;
		
	}
	
	return 0;
}