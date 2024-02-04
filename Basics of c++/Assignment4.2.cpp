
//Palindrome

#include<iostream>
using namespace std;

int main(){
	
	int a,b,flag,count=0;
	
	cout<<"Enter Number \n";
	cin>>a;
	flag=a;
	
	while(a>0){
		b=a%10;
		count=count*10+b;
		a=a/10;
	}
	
	if(flag=count){
		cout<<"Palindrome\n";
	
}
	else
		cout<<"Not Palindrome";

			
	
	return 0;

}
  