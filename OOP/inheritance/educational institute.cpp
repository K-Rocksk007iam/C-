#include <iostream>
using namespace std;
class Person
{ 
  protected:
  		string name,address,dateofbirth;
  public:
  		void display(){
	  	cout<<"THIS THE INFORMATION :\n";
	  	cout<<name<<" "<<address<<" "<<dateofbirth<<endl;
	  	 }
};

class Student:public Person
{
	private:
    int sid;
    string major;
  
  public:
  	seDataStud(string n,string a,string dob,int sid,string major){
  		name=n; address=a ; dateofbirth=dob;
	  }
  	
  	void study()
  	{	
  		
  		display();
  		cout<<name<<" "<<sid<<" "<<major<<endl;
  		
	  }
 
};

class Instructor:public Person
{
	private:
    int empid;
    string subject;
  
  public:
  	
	  seDataemp(string n,string a,string dob,int empid,string subject){
  		name=n; address=a ; dateofbirth=dob;
  		
	  }
  	
  	void teach()
  	{	
  		
  		display();
  		cout<<name<<" "<<empid<<" "<<subject<<endl;
	  }
	  
 
};

int main()
{
	Student obj1;
	obj1.seDataStud("kunal","nashik","nov",1,"comp");
	obj1.study();
	
	Instructor obj2;
	obj2.seDataemp("kunal","nashik","nov",101,"OS");
	obj2.teach();
	
	
	return 0;
}
