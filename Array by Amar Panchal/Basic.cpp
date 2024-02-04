#include <iostream>
using namespace std;
int main() 
{
 int a[10],sum=0,index,average=0;
 for( index=0;index<5;index++)
 {
 	cout<<"\neneter element:";
 	cin>>a[index];
 	sum=sum+a[index];
 }
 for(index=0;index<5;index++)
 {
 	cout<<"\nElement at "<<index<<" is "<<a[index]<<endl;
 }
 
  average=sum/5;
  
cout<<"\nSUM IS :"<<sum<<endl;
cout<<"average :"<<average<<endl;
 
 for( index=0;index<5;index++)
 {
 	if(average<a[index]){
 		cout<<"the largest elemet :"<endl;
 		cout<<a[index];
	 }
 }

}