#include<iostream>
using namespace std;

int main(){
	float Num1,Num2;
	cout<<"Enter numbers :";
	cin>>Num1>>Num2;
	cout<<"\nEntered numbers are :"<<Num1<<" "<<Num2;
	
	char ch;
	cout<<"\nEnter Choice :";
	cin>>ch;
	cout<<"\nentered choice is :"<<ch;

	
	switch(ch){
		
		case '+':Num1+=Num2;
		cout<<"\nAdiition is :"<<Num1;
		break;
		
		case '-':Num1-=Num2;
		cout<<"\nSubtraction is :"<<Num1;
		break;
		
		case '*':Num1*=Num2;
		cout<<"\nMultiplication is :"<<Num1;
		break;
		
		case '/':Num1/=Num2;
		cout<<"\nDivision is :"<<Num1;
		break;
		
		default:
			cout<<"Enter valid choice";
	}
	
}