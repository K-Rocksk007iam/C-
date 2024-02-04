#include<iostream>
using namespace std;

int main(){
	int arr[5],sumOfEven=0,count=0,sumOfOdd=0,countOdd=0;
	
	cout<<"Enter Even And ODD elements :\n";
	for(int i=0;i<5;i++){
		
		cin>>arr[i];
		
		}
	
	for(int i=0;i<5;i++){
		
		if(arr[i]%2==0){
			cout<<"Even Elements :";
			cout<<arr[i]<<endl;
			sumOfEven=sumOfEven+arr[i];
			count++;
			
		}
		else if(!arr[i]%2==0){
			cout<<"ODD Elements :";
			cout<<arr[i]<<endl;
			sumOfOdd=sumOfOdd+arr[i];
			countOdd++;
			
		}
		
	}
	
	cout<<"\nSum Of ODD Elements : "<<sumOfOdd;
	cout<<"\nSum Of even Elements : "<<sumOfEven;
	cout<<"\nCount Of even Elements : "<<count;
	cout<<"\nCount Of ODD Elements : "<<countOdd;

	return 0;
}

