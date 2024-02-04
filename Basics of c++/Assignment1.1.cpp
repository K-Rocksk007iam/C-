#include<iostream>
using namespace std;

int main(){
	int x;
	cout<<"Enter Age of a Person ";
	cin>>x ;
	if(x>=18){
		if(x>=65){
			cout<<"Senior citizen";
		}
		else{
		
		cout<<"Major";
	}
	}
	else{
		cout<<"minor";
	}
	
	return 0;
}
