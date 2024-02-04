//Assign and print the roll number, phone number and address of two students having names "Sam"
//and "John" respectively by creating two objects of the class 'Student'.

#include<iostream>
using namespace std;

class Students {
private:
    int rollNo, phoneNo;
    string address;

public:
    void setData(int r, int pn, string ad) {
        rollNo = r;
        phoneNo = pn;
        address = ad;
    }

    void printData() {
        cout << "Roll Number: " << rollNo << "\nPhone Number: " << phoneNo << "\nAddress: " << address << endl;
    }
};

int main() {
    Students obj[2]; 

    string names[] = {"Sam", "John"};
    int r, pn;
    string ad;

    for (int i = 0; i < 2; i++) {
        cout << "Enter " << names[i] << "'s information:\n";
        cout << "Roll Number: ";
        cin >> r;
        cout << "Phone Number: ";
        cin >> pn;
        cout << "Address: ";
        cin>>ad;

        obj[i].setData(r, pn, ad);
    }

    
    for (int i = 0; i < 2; i++) {
    	cout<<"\n------------------------------------------------------\n";
        cout << "\n" << names[i] << "'s Information:\n";
        cout<<"\n------------------------------------------------------\n";
        obj[i].printData();
    }

    return 0;
}

