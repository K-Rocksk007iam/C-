#include <iostream>
using namespace std;
class Instrument
{ 
protected:
	string name,price;
  public:
  	virtual void playsound()=0;
  	
 	void setdata(string n,string p){
 		name=n;  price=p;
		  	
	  }

  	void displaydetails(){
  		cout<<"NAME :"<<name;
  		cout<<"\n";
  		cout<<"PRICE :"<<price;
  		cout<<"\n";
	  }
	  void setPrice(int newPrice){
	  		cin>>newPrice;
	  		price=newPrice;
	  }
	  
//	  int getPrice(){
//	  	return price;
//	  }
	  
};

class Sitar:public Instrument
{
	private:
    int noString;
  
  public:
  	void setdata(string n,string p,int noS){
  		 name=n;  price=p;	noString=noS;
  		cout<<"\n";
  		displaydetails();	
  		cout<<"String : "<<noString<<endl;
	  }
  	
  	void playsound(){
  		
  		cout<<"Strumming the "<<noString<<" stringed sitar!"<<endl;
  		cout<<"\n";
	  }
 
};

class Tabla:public Instrument
{
	private:
    string tablaSet;
  
  public:
  	void setdata(string n,string p,string tab){
  		 name=n;  price=p; tablaSet=tab;
  		cout<<"\n";
  		displaydetails();
		  cout<<"Set: "<<tablaSet<<endl;	
	  }
  	void playsound(){
  		
  		cout<< "Beating the rhythmic tabla set!"<<endl;
  		cout<<"\n";
	  }
 
};

int main()
{
	Sitar sit;
	sit.setdata("mohans sitar","$30,000",19);
	sit.playsound();
	cout<<"\n";
	
	Tabla tab;
	tab.setdata("Giridhar's Tabla Set","$12,000.","Dayan and Bayan pair");
	tab.playsound();
	

	
	return 0;
}
