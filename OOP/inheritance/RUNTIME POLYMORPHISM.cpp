#include <iostream>
using namespace std;
class Shape
{ 
  public:
  	virtual void area()=0;
};

class Square:public Shape
{
	private:
    int length;
  
  public:
  	
  	void area()
  	{	
  		cout<<"enter length\n";
  		cin>>length;
  		cout<<"AREA IS :"<<length*length<<"\n";
	  }
 
};

class Rectange:public Shape
{
	private:
    int length,breadth;
  
  public:
  	
  	void area()
  	{	
  		cout<<"enter length and breadth\n";
  		cin>>length>>breadth;
  		cout<<"AREA IS :"<<length*breadth<<endl;
	  }
	  
 
};

int main()
{
	
	Shape* obj;
	Square r;
	obj = &r;
	obj->area();
	
	Rectange obj2;
    obj = &obj2;
	obj->area();

	
	return 0;
}
