#include<iostream>
using namespace std;

int main(){
	float RollNo,math, science , english , TotalMarks;
	float percentage;
	char name[30];
	
	cout<<"Enter name :";
	cin>>name;
	
	
	cout<<"Enter Marks of 3 subjects :\n";
	cin>>math>>science>>english;
	
	TotalMarks=math+science+english;
	cout<<"\nTotal Marks are : "<<TotalMarks;
	
	percentage=TotalMarks/30*10;
	cout<<"\nPercentage will be :"<<percentage;
	
	
	
	
	if(percentage>=75){
		cout<<"\nGrade A";
	}
	
	else if(percentage>=60){
		cout<<"\nGrade B";
	}
	
	else if(percentage>=40){
		cout<<"\nGrade c";
	}
	
	else{
		cout<<"\nFail";
	}
	return 0;
}