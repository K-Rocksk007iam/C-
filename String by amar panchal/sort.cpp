#include <iostream>
using namespace std;
int main() 
{
 int size,i,j;
 string a[100],t;
 cout<<"total names :";
 cin>>size;
 for(i=0;i<size;i++)
 {
 	cout<<"\nenter name of student"<<i+1<<":";
 	cin>>a[i];
 }
 
 for(i=0;i<size-1;i++)//n-1 passes 
 {
   for(j=0;j<size-1;j++)//compares and sorts
   {
   	 if(a[j]>a[j+1])
   	 {
   	 	t=a[j];
   	 	a[j]=a[j+1];
   	 	a[j+1]=t;
		}
   }
 }
 	cout<<"rollno\tSorted names: ";
   for(i=0;i<size;i++)
 {
 	cout<<"\n"<<i+1<<"\t"<<a[i];
 }
 
 
 	
 
}
