#include<iostream>
#include<fstream>
#include<ctime>
using namespace std;
int main() 
{	
   int counta=0,countd=0,counts=0;
  cout<<"Your Name please:";
  string name,data,line;
  cin>>name;
  ofstream myFile(name+".txt", ios::app);
  
  time_t now = time(0);
   
  string date_time = ctime(&now);
  myFile<<"Logged on: "<<date_time;
   do
   {
   	cout<<"\nYour line  >";
   	getline(cin,data);
   	if(data=="EXIT_NOW")
   	 {
   	  myFile<<"------------------------------------------\n";
      myFile.close();
   	  break;
	 }
	 else
	 {
	  myFile<<data<<"\n";
	  
	  
	  for(int i=0;i<data.length();i++) 
   {
   	getline(cin,data);
   	if (data[i]>='a' && data[i]<='z' || data[i]>='A' && data[i]<='Z' )
   		counta++;
   	else if(data[i]>='0' && data[i]<='9')
   		countd++;
   	else if(data[i]!=' ')
   	    counts++;
   }
	 }
	  cout<<" Alpha: "<<counta<<"\n Digits: "<<countd<<"\n Symbols:"<<counts;
	  }while(true);
	 
	  
	  
	  return 0;
}