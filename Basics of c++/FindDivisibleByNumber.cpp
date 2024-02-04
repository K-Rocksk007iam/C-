#include<iostream>
using namespace std;

int main(){
	
	int n,count=0;
	
	for(int i=1;i<=100;i++){
		
		if(i%7==0){
			
		cout<<i<<"  \n";	
		count++;
		}
	}
	cout<<"Count is :"<<count;
	
	return 0;
}