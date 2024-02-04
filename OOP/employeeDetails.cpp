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
				cout<<name<<" "<<eNo<<" "<<salary<<endl;
				return(salary);
			}
			
		
};


    main(){
    int total=0,avg;
	Employee obj1,obj2,obj3,totalSal;
	obj1.info();
	obj2.info();
	obj3.info();
	
	total=obj1.salary+obj2.salary+obj3.salary;
	avg=total/3;
	
	cout<<"name EmpNum salary"<<endl;
	obj1.printInfo();
	obj2.printInfo();
	obj3.printInfo();
	
	cout<<"\n\nTotal of Salary is :"<<total;
	cout<<"\n\nAverage of Salary is :"<<avg;
}




