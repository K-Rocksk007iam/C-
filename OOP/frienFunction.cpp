#include <iostream>
using namespace std;
//use this to print answer in cm from both
//forward decleration
class Feet;
class Inches
{

	private:
		int inches;
		
	public:
		void setInches(int i)
		{
			inches=i;
		
		}
		friend void display_for_all(Feet f,Inches i);
};

class Feet
{
	private:
		int feet;
	public:
		void setFeet(int f)
		{
			feet=f;
		}
	    friend void display_for_all(Feet f,Inches i);
};
void display_for_all(Feet f,Inches i)
{
	cout<<"Given Feet and inches converted into CM: "<<f.feet*2.54+i.inches*30.48<<"cm";
}
int main()
{
	Feet f;Inches i;
	int n,r;
	cout<<"ENTER FEET AND INCHES TO CONVERT :\n";
	cin>>n>>r;
	f.setFeet(n);
	i.setInches(r);
    display_for_all(f,i);

	return 0;
}