//2D array--->matrix
#include <iostream>
using namespace std;
int main() 
{
 int m[10][10],rows,columns,r,c,flag=1;
 cout<<"Enter rows and columns:\n";
 cin>>rows>>columns;
 for(r=0;r<rows;r++)
 {
   for(c=0;c<columns;c++)
   {
 	cout<<"\neneter element at"<<r<<","<<c<<" :"<<endl;
 	cin>>m[r][c];
 }
}
 for(r=0;r<rows;r++)
 {
   for(c=0;c<columns;c ++)
   {
 	cout<<m[r][c]<<"\t";
   }
   cout<<"\n";
 
 }
 cout<<"--------------------------------------------------------- \n";
 cout<<"TRANSPOSE IS \n";
 
 for(c=0;c<columns;c++)
 {
   for(r=0;r<rows;r++)
   {
 	cout<<m[r][c]<<"\t";
   }
   cout<<"\n";
 
 }
 
 for(r=0;r<rows;r++)
 {
   for(c=0;c<columns;c++)
   {
 	if(m[r][c]!=m[c][r]){
 		
 		flag==0;
 		break;
	 }
	  
   }
   cout<<"\n";
 
 }
 if(flag==1){
	 	cout<<"SYEMETRICAL"<<endl;
	 }
	 
	 else{
	 	cout<<"NOT SYMETRICAL"<<endl;
	 }
 

return 0; 
}