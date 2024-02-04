//find number is a perfect sqaure or not

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	float num;
	cin>>num;
	
	if(num==sqrt(num)*sqrt(num)){
		cout<<"PERFECT";
	}
	else{
		cout<<"NOT";
	}
} 
