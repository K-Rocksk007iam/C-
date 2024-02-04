#include<iostream>
#include<cmath>
using namespace std;

int main(){
	float a,b,c;
	cout<<"ENTER VALUES OF A B C :\n";
	cin>>a>>b>>c;
		

	if((pow(b,2)-4*a*c)<0){
	
		cout<<"ROOTS ARE IMAGINARY";
		
		
	}
	else{
		cout<<"+ :"<<(-b+sqrt(pow(b,2))-(4*a*c))/2*a<<endl;
		cout<<"- :"<<(-b-sqrt(pow(b,2))-(4*a*c))/2*a<<endl;
		cout<<"\nNOT IMAGINARY";
	}
	
	return 0;
}
