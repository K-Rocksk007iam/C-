#include<iostream>
using namespace std;

class Student
{
	private:
		string name; int contact,rollNo;
		static int count;
	public:
		
		void addNewStudent(string n,int c){
			name=n;
			contact=c;
			rollNo=++count;
		}
		
		void editStudent(){
			
		}
		
		int searchStudent(){
			
		}

			
};

int Student::count=100;

int main()
{	
	Student obj[10];
	int choice; int key;
	
cout<<"\n1.Add New Student\n2.Edit info\n3.Search\n:";
 
		string n; int c;
		
		do{
		
		cout<<"ENTER CHOICE\n";
		cin>>choice; 
		switch(choice)
		{
			case 1:
					cout<<"Add New Stduent info\n";
					cin>>n>>c;
					break;
			case 2:
					for(int i=0;i<5;i++){
						obj[i].editStudent();
					}
					break;
			case 3:
				for(int i=0;i<5;i++){
					cout<<"ENTER ROLLNO TO FIND\n";
					 cin>>key;
					obj[i].searchStudent();
				}
					break;
		
			case 0:
					cout<<"Exiting.... coded by kunal";
					break;
			default:
					cout<<"Wrong choice:";
					break;
		}
	
}
while(choice!=0);
return 0;
}
