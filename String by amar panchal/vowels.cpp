#include<iostream>
using namespace std;

int main(){
	
	int count=0;
	//char ch;
	cout<<"enter string\n";
	string name;
	getline(cin,name);
	//cout<<"enter character to found\n"<<ch;
	
	///cin>>ch;
	
	
	for(int i=0;i<name.length();i++){
			
		if(name[i]==' '){
			count++;
		}
		
		
	}
	cout<<"total count of words :"<<count+1;
	
	return 0;
}
