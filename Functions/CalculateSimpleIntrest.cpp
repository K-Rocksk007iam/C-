#include<iostream>
using namespace std;

void simpleIntrest(int prinAmount,float rateOfInt,int noOfYears,int simIntre,int totalAmount){
	
	simIntre=(prinAmount*rateOfInt*noOfYears)/100;
	totalAmount=prinAmount+simIntre;
	cout<<"Simple intrest is :\n"<<simIntre<<endl;                                    
	cout<<"Total amount is :\n"<<totalAmount<<endl;
}

int main(){
	int prinAmount,noOfYears,simIntre,totalAmount;
	float rateOfInt;
	cout<<"Enter principal Amount,rate Of Intrest, no Of Years :\n";
	cin>>prinAmount>>rateOfInt>>noOfYears;
	
	simpleIntrest(prinAmount,rateOfInt,noOfYears,simIntre,totalAmount);
	return 0;
}


