#include<iostream>
using namespace std;

class Book{
	private:
		string title,author;
		int isbn;
		bool issuedStatus;
		
	
	public:	
		Book(string t,string a,int i){
			cin>>t>>a>>i;
			title=t; author=a; isbn=i; 
			bool issuedStatus=false;
		
		}
		~Book(){cout<<title<<" \nhas been removed"<<endl;}
	
		void issuebook(){
			issuedStatus=true;
			cout<<title;
		}
		
	
		void returnbook(){
			issuedStatus=false;
			
		}
		void display(){
			cout<<"\n";
			cout<<title<<" "<<issuedStatus;
		}
		
		
		
		
};


int main(){
	string t,a;
	int i;
	cout<<"ENTER TITLE AUTHOR \n";
	
	Book obj(t,a,i);
	cout<<"book status\n";
	obj.issuebook();
	obj.returnbook();
	obj.display();
	cout<<"book status\n";
	Book obj1(t,a,i);
	obj1.issuebook();
	obj1.returnbook();
	obj1.display();
	
	return 0;
}
