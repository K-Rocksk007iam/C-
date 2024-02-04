#include <iostream>
using namespace std;
class Maths

{
	private:
    int n1,n2,n3,n4;
  
  public:
  	
		void add(int x,int y)
  	{	
  	n1=x;n2;
  		cout<<"enter Numbers\n";
  		cin>>n1>>n2;
  		cout<<"ADDITION IS :"<<n1+n2<<"\n";
	  }
	  
	    void add(int x,int y,int z)
  	{	n1=x;n2=y;n3=z;
  		cout<<"enter Numbers\n";
  		cin>>n1>>n2>>n3;
  		cout<<"ADDITION IS :"<<n1+n2+n3<<"\n";
	  }
 		
 		void add(int x,int y,int z,int w)
  	{	n1=x;n2=y;n3=z;n4=w;
  		cout<<"enter Numbers\n";
  		cin>>n1>>n2>>n3>>n4;
  		cout<<"ADDITION IS :"<<n1+n2+n3+n4<<"\n";
	  }
};



int main()
{
	Maths obj;
	obj.add(0,0);
	obj.add(0,0,0);
	obj.add(0,0,0,0);
	
	return 0;
}
