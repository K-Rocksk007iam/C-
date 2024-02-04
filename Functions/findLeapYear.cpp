#include<iostream>
using namespace std;

void findLeapYear(int leapYear){
	if(leapYear%4==0 && leapYear%100!=0){
		cout<<"Leap Year ";
	}
	else{
		cout<<"Not a leap year";
	}
	
}

int main(){
	int leapYear;
	cout<<"Enter leap year:\n";
	cin>>leapYear;
	findLeapYear(leapYear);
	
	return 0;
}
