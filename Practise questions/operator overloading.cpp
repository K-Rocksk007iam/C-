#include <iostream>
using namespace std;

class Time
{
	
    private:
		int hours,minutes,seconds;
	public:
		void setTime(int h,int m,int s)
		{
			hours=h;
			minutes=m;
			seconds=s;
		}
		void display()
		{
			cout<<"\n"<<hours<<":"<<minutes<<":"<<seconds;
		}
		
		Time operator+(Time l2)
			{
				Time temp;
				temp.hours=hours+l2.hours;
				temp.minutes=minutes+l2.minutes;
				temp.seconds=seconds+l2.seconds;
				
				temp.minutes+=temp.seconds/60; // converts seconds to minutes
				temp.seconds=temp.seconds%60;  
				
				temp.hours+=temp.minutes/60;   //converts minutes to hours
				temp.minutes=temp.minutes%60;
				
				return temp;
			}
	
};


int main()
{
   Time l1,l2,l3;
   l1.setTime(8,50,40);
   l2.setTime(6,50,20);
   l3=l1+l2;//  l1.operator+(l2)--->l1 calls l2 gets passed
   
   l1.display();
   l2.display();
   l3.display();
   
    
	return 0;
}