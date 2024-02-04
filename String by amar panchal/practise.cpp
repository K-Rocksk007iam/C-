#include<iostream>
using namespace std;

int main(){
	int flag=1;
	cout<<"enter string\n";
	string name;
	getline(cin,name);
	int length=name.length();
	int i,j;
	
	for(i=0,j=name.length()-1;i<j;i++,j--){
		
		if(name[i]!=name[j]){
			flag=0;
			break;
		}
		
		if(flag==1){
			cout<<"palindrome";
		}
		else{
			cout<<"not palindrome";
		}
	}	
	return 0;
}
