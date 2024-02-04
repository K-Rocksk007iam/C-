
//accept element and comment element found in array or not
#include <iostream>
using namespace std;
int main() 
{

 int a[]={10,20,30,40,50,60},key,pos;
 cout<<"Enter element to search:";
 cin>>key;
 int flag=0;//0 means no 
 for(int index=0;index<6;index++)
 {
 	pos=index;
   
   if(key==a[index])
    {
    	flag=1;//yes found
    	
    	break;
	}
 }
 if(flag==1)
	 cout<<"\nElement found at Index :"<<pos;
  else
    cout<<"\n -1";
 	

return 0;
}
