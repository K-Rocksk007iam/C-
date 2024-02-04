//dyanamic memory allocation

#include<iostream>
using namespace std;

int main(){
	int *p=NULL;   //int *p=null is used to handle garbage values
	cout<<p<<"\n"; //without null it will print the garbage value and address
	p=new int[5];
	
	for(int i=0;i<5;i++){
		cout<<"ENTER ELEMENTS :"<<(i+1)<<" :";
		cin>>p[i];//only works in c++
	//  cin>>*(p+i);//works in c and c++
	}
	
	cout<<"ENTERED ELEMENTS :\n";
	for(int i=0;i<5;i++){
		
		cout<<p[i]<<" ";
	}
	delete p;//to free memory allocated
	cout<<"+\n"<<p;
}