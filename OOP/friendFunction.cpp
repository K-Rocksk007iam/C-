#include <iostream>
using namespace std;
class X
{
    private:
		int datax;
	public:
		void setX(int data)
		{
			datax=data;
		}
        friend void display(X obj);	//prototype		
};

void display(X obj)//declaration--defination
		{
			cout<<"\nDatax is: "<<obj.datax;
			
		
		}
int main()
{
   X objx;
   objx.setX(1200);
   display(objx);//direct call
	return 0;
}
