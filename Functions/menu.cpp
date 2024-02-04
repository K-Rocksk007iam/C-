#include<iostream>
using namespace std;

 add(int a,int b,int ans){
	ans=a+b;
	cout<<"Addition is : "<<ans<<endl;
}

 sub(int a,int b,int ans){
	ans=a-b;
	cout<<"Subtraction is : "<<ans<<endl;
}

int mul(int a,int b,int ans){
	ans=a*b;
	cout<<"multiplication is : "<<ans<<endl;
}

int div(int a,int b,int ans){
	ans=a/b;
	cout<<"Divison is : "<<ans<<endl;
}


int main(){
	
	int a,b;
	float ans;
	cout<<"Enter numbers :";
	cin>>a>>b;
	
	add(a,b,0);
	sub(a,b,0);
	mul(a,b,0);
	div(a,b,0);
	
	return 0;
}
