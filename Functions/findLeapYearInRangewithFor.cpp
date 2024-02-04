#include<iostream>
using namespace std;


int leapYearInRange(int count){
	
	for(int i=2000;i<=2020;i++){
		
		if(i%4==0 && i%100!=0){
			cout<<"leap years are :"<<i<<endl;
			count++;
		}
	}
	cout<<"Count of years are :"<<count<<endl;
	
}
int main(){
	int count;
	leapYearInRange(0);
	return 0;
}
