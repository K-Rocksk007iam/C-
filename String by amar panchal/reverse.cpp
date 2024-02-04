#include<iostream>
using namespace std;

int main(){
	int diff=0,total=0,total1=0;
	double final=0;
	cout<<"enter string\n";
	string name;
	getline(cin,name);
	
	string name1;
	getline(cin,name1);

	for(int i=0;i<name.length();i++){
		
		total+=(int)name[i];
		}
		cout<<total<<endl;
		
		for(int i=0;i<name1.length();i++){
		
		total1+=(int)name1[i];
		}
		cout<<total1<<endl;
		
		cout<<"Diff is :";
		
		final=total1-total;
		cout<<final;
	
	
	return 0;
}
