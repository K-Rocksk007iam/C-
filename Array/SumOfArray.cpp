#include<iostream>
using namespace std;

int main(){
	int arr[5],sum=0,count=0;
	float average=0;
	
	for(int i=0;i<5;i++){
		
		cin>>arr[i];
		count++;
		
			sum=sum+arr[i];
			
		
		
	}
	
	for(int i=0;i<5;i++){
		
	    cout<<"\n"<<arr[i];
	}
	
	average=sum/count;
	cout<<"\nSum Of array : "<<sum;
	cout<<"\nAverage Of array : "<<average;
}

