#include <iostream>
using namespace std;

class Maths{
	private:
	float no1,no2;
	
	public:
		float add(float n1,float n2){
			no1=n1;
			no2=n2;
			cout<<no1+no2;
		}
		
		float sub(float n1,float n2){
			no1=n1;
			no2=n2;
			cout<<no1-no2;
		}
		float mul(float n1,float n2){
			no1=n1;
			no2=n2;
			cout<<no1*no2;
		}
		float div(float n1,float n2){
			no1=n1;
			no2=n2;
			cout<<no1/no2;
		}
};


int main() 
{
 int ch,n1,n2;
 Maths obj;
cout<<"ENTER THE ENTRY :\n";
  cin>>ch;
 switch(ch){
 	case 1:
 		obj.add(2,3);
 			break; 
 		
 	case 2:
 		obj.sub(2,3);
		break;
	 	
	 case 3:
	 	obj.mul(3,4);
		break;
	 	
	 case 4:
	 	obj.div(10,2);
		break;
	 default:
	 cout<<"invalid";	
 	
 }
 
 
 
 return 0;
}