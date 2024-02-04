#include<iostream>
using namespace std;

class Student{
	private:
	string name;
	int rollNo;
	
	public:
	void data(string n,int r){
		name=n;
		rollNo=r;
	}
	
	void display(){
		cout<<"\n---------------------------------\n";
		cout<<"THIS IS THE INFORMATION :\n"<<name<<"\t"<<rollNo;
	}
	
	int findRollno(int rolln){
		for(int i=0;i<3;i++){
			if(i==rollNo){
				cout<<"found"<<i+1;
			}
			else{
				return -1;
			}
		}
	}
};


int main(){
	
	Student obj[10];
	cout<<"ENTER INFORMATION: \n";
	cout<<"\n---------------------------------\n";
	
	for(int i=0;i<3;i++)
    {	
 	 cout<<"\nFor student "<<(i+1)<<"\nEnter Name and roll no\n";
 	 string n; int r;
 	 cin>>n>>r;
 	 obj[i].data(n,r);
    }
	for(int i=0;i<3;i++)
    {	
	 obj[i].display();
    }
    
    cout<<"\nENTER THE ROLL NO TO FIND :\n";
    int rolln;
    cin>>rolln;
    
	for(int i=0;i<3;i++)
    {	
	 obj[i].findRollno(rolln);
    }
    
return 0;	
	
}