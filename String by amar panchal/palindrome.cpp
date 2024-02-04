#include<iostream>
using namespace std;

int main(){
	cout<<"enter string\n";
	string name;
	getline(cin,name);
	int length=name.length();
	
	for(int i=length-1;i>0;i--){
		
		if(name.compare(i,)){
			cout<<"PALINDROME";
		}
		else{
			cout<<"not palindrome";
		}
	}	
	return 0;
}
