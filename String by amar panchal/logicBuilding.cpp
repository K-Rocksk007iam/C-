#include<iostream>
using namespace std;

int main(){
	int countAlpha=0,countDigit=0,countSymbol=0,length;
	cout<<"enter string\n";
	string name;
	getline(cin,name);
	
	for(int i=0;i<name.length();i++){
		
		if(name[i]>='a'&&name[i]>='z'||name[i]>='A'&&name[i]>='Z'){
			countAlpha++;
			
		}
		else if(name[i]>='0'&&name[i]<='9'){
			countDigit++;
		}
		else{
			countSymbol++;
		}
	}
	
	cout<<"NUMBER OF ALPHABET "<<countAlpha<<endl;
	cout<<"NUMBER OF DIGIT "<<countDigit<<endl;
	cout<<"NUMBER OF SYMBOL "<<countSymbol<<endl;
	
	return 0;
}
