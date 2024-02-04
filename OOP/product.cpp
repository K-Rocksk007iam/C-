#include<iostream>
using namespace std;

class Product{
	public:
		int pNo,quantity,amount;
		float discount,netamount,cost;
		char pName[20];
		
		Product(){
			pNo=101;
			cost=400.20;
		}
		
		void info{
			cin>>pNo>>quantity>>pName;
		}
		
		void printInfo(){
			cout<<pNo<<quantity<<pName;
		}
};



int main(){
	Product obj1;
	cout<<"Enter info :\n";
	obj1.info();
	
	cout<<"Given info is :\n";
	obj1.printInfo();
	return 0;
}
