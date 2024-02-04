#include<iostream>
using namespace std;

int main(){
	int x;
	cout<<"Enter the number ";
	cin>>x;
	if(x==0){
		cout<<"number should be greater than 0";
	}
	
	if(x>=1&&x<=250){
		cout<<"number is between 1-250";
	}
	else if(x>250&&x<=500){
		cout<<"number is in between 251-500";
	}
	else if(x>500&&x<=700){
		cout<<"number is in between 501-700";
	}
	
	else{
		cout<<"number not in the range of 1-700";
	}
	return 0;
}