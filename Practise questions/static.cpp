#include<iostream>
using namespace std;

class Student{
	private:string name;
			int age;
			static int count;
	
	public:
		void setData(string n,int a){
			name=n; age=a;
			count++;
		}
		
		void display(){
			cout<<"\nName:"<<name<<" "<<"Age:"<<age<<" "<<"count:"<<" "<<count;
		}	
		
		static void display_total(){
			cout<<"\ntotal count is :";
			cout<<count;
		}	
};

int Student::count=20;
	int main(){
			Student obj[10];
			string n;
			int a;
			for(int i=0;i<3;i++){
				cout<<"\nenter name and age \n";
				cin>>n>>a;
				obj[i].setData(n,a);
				obj[i].display();
				
			}
			
			Student::display_total();
			
	return 0;
}