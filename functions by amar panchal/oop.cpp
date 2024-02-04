#include<iostream>
using namespace std;

class Student{
	private:
	string name;
	int rollNo;
	public:
	void data(string n="john",int r=2){
		name=n;
		rollNo=r;
	}
	
	void display(){
		
		cout<<"THIS IS THE INFORMATION :\n"<<name<<"\t"<<rollNo;
	}
};


int main(){
	string n;
	int r;
	Student obj;
	cout<<"ENTER INFORMATION: \n";
	cin>>n;
	cin>>r;
	obj.data();
	obj.display();
}