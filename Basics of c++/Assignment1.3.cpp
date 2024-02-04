#include<iostream>
using namespace std;

int main(){
	int proNum,costOfProduct;
	char proName;
	int discountAt10Per,discountAt5Per,NetAmount;
	cout<<"Enter product Number and Cost of product :";
	cin>>proNum>>costOfProduct;
	
	discountAt10Per=costOfProduct*10/100;
	discountAt5Per=costOfProduct*5/100;
		
	
	cout<<"Enter product name :";
	cin>>proName;
	
	if(costOfProduct>=5000){
		cout<<"Discount of 10% will be :";
		
	
		cout<<discountAt10Per;
		
		cout<<"Net amount will be :";
		NetAmount=costOfProduct-discountAt10Per;
		cout<<NetAmount;
		
		
	}
	else{
		cout<<"Discount of 5% will be :";
		
		cout<<discountAt5Per;
		
		cout<<"\nNet amount will be :";
		NetAmount=costOfProduct-discountAt5Per;
		cout<<NetAmount;
	}
	
	return 0;
}