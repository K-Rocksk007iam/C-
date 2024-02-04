//code to store N elements and print them back
#include <iostream>
using namespace std;

int a[]={10,20,30,40,50},t,size=5,rotations,index;

 void display(int a[],int size){
 
 for(index=0;index<size;index++)
		 {	
		 
		 	cout<<a[index]<<"  ";
		 }
 
}
		
		void rotate(int a[],int size,int rotations){
			
			display(a,size);
			
		 for(int i=0;i<rotations;i++)//rotations cycle
		 {
		 	t=a[0];//cavity created  1
		 	for(int j=0;j<size-1;j++)//shifts   2
		 	{
		 		a[j]=a[j+1];
			}
			a[size-1]=t;//3
			cout<<"\nAfter rotation "<<(i+1)<<":";
		   display(a,size);
		    cout<<endl;
		 }
		 
		}
		
		void antiClockWise(int a[],int size,int rotations){
			
			display(a,size);
			
		 for(int i=size-1;i>0;i--)//rotations cycle
		 {
		 	t=a[size]-1;//cavity created  1
		 	for(int j=size-1;j>0;j--)//shifts   2
		 	{
		 		a[j]=a[j-1];
			}
			a[0]=t;//3
			cout<<"\nAfter rotation "<<(i+1)<<":";
		   display(a,size);
		    cout<<endl;
		}
}

int main() 
{
	int a[]={10,20,30,40,50},t,size=5,rotations,index;
 //ask number of rotations
 cout<<"\nEnter rotate for:";
 cin>>rotations;
 cout<<"\nWe have:";
 //do rotations and display each
    
	rotate(a,size,rotations);	
	cout<<"ANTI CLOCKWISE\n";
	antiClockWise(a,size,rotations);
	 
	 return 0;
}


