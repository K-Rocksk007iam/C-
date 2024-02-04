/*
#include <iostream>
using namespace std;
class Base
{

	public:
		int datax1;
	protected:
		int datax2;
	private:
		int datax3;
};
//class name: mode base class
class Derrived:public Base
{
	public:
		int datay1;
	protected:
		int datay2;
	private:
		int datay3;
};
int main()
{
	Derrived x;
	x.datax1=100;
	
	
	return 0;
}
*/








#include <iostream>
using namespace std;
class Human
{
	private:
		string name,gender;
	public:
		void setHuman(string n,string g)
	    	{
	    		name=n;
	    		gender=g;
			}
		void displayHuman()
		{
			cout<<"you are: "<<gender<<" called "<<name;
		}
};
class Student:public Human
{
	private:
		string degree;
	public:
		void setDegree(string d)
		{
			degree=d;
		}
		void displayinfo()
		{
		
			cout<<"\nDegree is: "<<degree;
		}
};
int main()
{
  Student s;
  s.setHuman("amar","male");
  s.setDegree("Phd");
  s.displayHuman();	
  s.displayinfo();	
	
	return 0;
}



/*
#include <iostream>
using namespace std;
class Human
{
	private:
		string name,gender;
	public:
		void setHuman(string n,string g)
	    	{
	    		name=n;
	    		gender=g;
			}
		void displayHuman()
		{
			cout<<"you are: "<<gender<<" called "<<name;
		}
};
class Student:public Human
{
	private:
		string degree;
	public:
		void setDegree(string n,string g,string d)
		{
			setHuman(n,g);
			degree=d;
		}
		void displayinfo()
		{
			displayHuman();
			cout<<"\nDegree is: "<<degree;
		}
};
int main()
{
  Student s;
  s.setDegree("amar","male","Phd");	
  s.displayinfo();	
	
	return 0;
}

*/







