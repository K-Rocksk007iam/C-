#include<iostream>
using namespace std;

class Convert{
	
	private:
		float usd,inr;
		
		public:
			
			
			float convertToInr(float i){
				
				cout<<"CONVERTED to inr: "<<i/80;
			}
			
			float convertToUsd(float u){
				
				cout<<"CONVERTED to inr: "<<u*80;
			}
			
			void setDataInr(float u,float i){
				usd=u;inr=i;
				convertToInr();
			}
			void setDataUSD(float u,float i){
				usd=u;inr=i;
				convertToUsd();
			}
};

int  main(){
	
	Convert obj;
	obj.setDataInr(700,20);
	obj.setDataUSD(700,20);
	obj.convertToInr();
	obj.convertToUsd();
	
	
	return 0;
}
