#include <iostream>
using namespace std;
class Human
{
	private:
		string name,gender;
	public:
	void setData(string n,string g){
		name=n; gender=g;
	}
	
};

class Education:public Human{	
	private:
		string degree;
	public:
		void setData(string d){
			degree=d;
		}
		
		
};

class Job:public Education
{	
	private:
		int salary;
	public:
		void setData(int s){
			salary=s;
		}
		
		void printInfo(string n,string g,string d,int salary){
			cout<<"ALL INFO IS :\n"<<n<<" "<<g<<" "<<d<<" "<<salary;
		}
	
};

int main(){
	Job l1;
	l1.printInfo("kunal","male","BE",10000);
	return 0;
}


