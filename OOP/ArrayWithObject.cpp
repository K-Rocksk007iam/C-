#include<iostream>
using namespace std;

class Employee{
	public:
		char name[20];
		int eNo,salary;
	
	public:
			void info(){
				cout<<"Enter information :\n";
				cin>>name>>eNo>>salary;
				
			}
			
			int printInfo(){
				cout<<name<<"\t"<<eNo<<"\t"<<salary<<endl;
				return(salary);
			}
		
};
	main(){
     int max=0;
     Employee obj1[3];
    
     for(int i=0;i<3;i++){
     	obj1[3].info();
     	
     	
	 }
    cout<<"NAME\tEID\tSALARY"<<endl;
    cout<<"-----------------------------"<<endl;
    for(int i=0;i<3;i++){
     	obj1[3].printInfo();
     	
	 }
	 
	 
		
}




