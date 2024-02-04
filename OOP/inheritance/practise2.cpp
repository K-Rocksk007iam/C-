#include<iostream>
using namespace std;

class Bike{
	
	public:
			int speed;
			
		
		public:
			Bike(){speed =40; cout<<"\ndefault speed is 40";};
			
			Bike(int s){
				speed=s;
				cout<<"\nINITITAL SPEED IS:"<<speed;
			}
			
			void accelerate(){
			
				if(speed==120){cout<<"\nPLEASE SLOW DOWN\n";Break();}
				
				speed+=5;  cout<<"\nspeed is incresed \n"<<speed;
			
				
			}
			void Break()
			{	
				if(speed==0){exit(0);}
				
				speed-=5; cout<<"\nspeed is decreased "<<speed;
				
			}
						
		};

int  main(){
	Bike obj;
	
	char ch; 
		do{
		cout<<"\nENTER CHARACTER :\n"; cin>>ch;
		
		
		if(ch=='a'||ch=='A'){
			
			obj.accelerate();
		}
		else if(ch=='b'||ch=='B'){
			obj.Break();
		}
		else{
			cout<<"\ninvalid";
		}
	}
	while(ch!='s');

	
	return 0;
}
