#include<iostream>
using namespace std;

int pow(int x, int n=1){
	int ans=1;
	for(int i=1;i<=n;i++){
		
		ans*=x;
	
	}
		return ans;
}

int main(){
	int x,n;
	cout<<"ENTER NUMBERS :\n";
	cin>>x>>n;
	cout<<"THIS IS THE ANS :\n"<<pow(x,n);
	
	return 0;
}