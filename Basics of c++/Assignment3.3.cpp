#include<iostream>
using namespace std;

int main(){
	
	
	int x,y,a=1,ans=1;
	cout<<"Write th value of x and y : \n";
	cin>>x>>y;
	
	
	while(a<=y ){
		cout<<" Ans is :";
		
		
		ans=ans*x;
		a++;
	
}

	cout<<x<<"^"<<y<<"="<<ans;
return 0;
}