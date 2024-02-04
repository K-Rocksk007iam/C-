#include<iostream>
using namespace std;

int main(){

	int ch;
	cout<<"Enter choice :";
	cin>>ch;
	switch(ch){
		
		case 1:cout<<"ODD AND EVEN\n";
				cout<<"Enter value of a :";
				int a;
				cin>>a;
				
				if(a%2==0){
					cout<<"Even";
				}
				else{
					cout<<"Odd";
				}
				break;
				
				
		case 2:cout<<"Find Largest Number\n";
				int Num1, Num2;
				cin>>Num1>>Num2;
				cout<<"Enter 2 vallues :";
				if(Num1>Num2){
					cout<<"Num1 is largest";
				}
				else{
				cout<<"Num2 is largest";
				}
				break;
				
		case 3:cout<<"Find Major and Minor person :\n";
				int age;
				cin>>age;
				cout<<"Enter age of person :\n";
				if(age>=18){
					cout<<"major";
				}
				else{
					cout<<"Minor";
				}
				break;
				
				default:
					cout<<"Enter valid choice";
	}
	

	
	return 0;
	}
	
