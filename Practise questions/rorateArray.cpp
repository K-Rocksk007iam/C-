//rotate array 

#include <iostream>
using namespace std;
//code to store N elements and print them back
#include <iostream>
using namespace std;
int main() 
{
 int a[]={10,20,30,40,50},t,size=5,rotations,index;
 //ask number of rotations
 cout<<"\nEnter rotate for:";
 cin>>rotations;
 cout<<"\nWe have:";
 //do rotations and display each
 for(index=0;index<size;index++)
 {
 	cout<<a[index]<<"  ";
 }
 for(int i=0;i<rotations;i++)//rotations cycle
 {
 	t=a[0];//cavity created  1
 	for(int j=0;j<size-1;j++)//shifts   2
 	{
 		a[j]=a[j+1];
	}
	a[size-1]=t;//3
	cout<<"\nAfter rotation "<<(i+1)<<":";
    for(index=0;index<size;index++)
     	cout<<a[index]<<"  ";
    cout<<endl;
 }
}
