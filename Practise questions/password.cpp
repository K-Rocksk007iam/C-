#include <iostream>
using namespace std;

class BankAccount {
private:
    static int nextAccountNumber;
    int accountNumber;
    string accountHolderName;
    int accountBalance;

public:
    BankAccount() {
        accountNumber=nextAccountNumber++;
        accountBalance=0;
    }

    BankAccount(string name,int balance) {
        accountNumber=nextAccountNumber++;
        accountHolderName=name;
        if (balance>=2000)
            accountBalance=balance;
        else {
            cout <<"Initial balance must be 2000 or more."<<endl;
            accountNumber=-1;
        }
    }

    int getAccountNumber() {
        return accountNumber;
    }

    void deposit(int amount) {
        if (amount>0) {
            accountBalance+=amount;
            cout <<"Deposited "<<amount<<" into account "<<accountNumber<<endl;
        } else {
            cout<<"Invalid deposit amount."<<endl;
        }
    }

    void withdraw(int amount) {
        if (amount>0) {
            if (accountBalance-amount>=1000) {
                accountBalance-=amount;
                cout<<"Withdrawn "<<amount<<" from account "<<accountNumber<<endl;
            } else {
                cout<<"Insufficient balance. Minimum balance of 1000 must be maintained."<<endl;
            }
        } else {
            cout<<"Invalid withdrawal amount."<<endl;
        }
    }

    void display() {
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Account Holder: "<<accountHolderName<<endl;
        cout<<"Account Balance: "<<accountBalance<<endl;
    }
};

int BankAccount::nextAccountNumber = 55007128;

int main() {
	string pass = "pass123";
    string input;
    cout << "What is your password: ";
    cin >> input;
    if (input==pass){
        cout << "Correct" << endl;
    
    BankAccount accounts[100];
    int accountCount = 0;

    while (true) {
        cout<<"Bank Management System Menu:"<<endl;
        cout<<"1. Open Account"<<endl;
        cout<<"2. Deposit"<<endl;
        cout<<"3. Withdraw"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice:"<<endl;

        int choice;
        cin>>choice;

        switch(choice) {
            case 1: {
                if (accountCount<100) {
                    string name;
                    int initialBalance;
                    cout<< "Enter account holder's name: "<<endl;
                    cin>>name;
                    cout<<"Enter initial balance (must be 2000 or more): "<<endl;
                    cin>>initialBalance;
                    accounts[accountCount] = BankAccount(name, initialBalance);
                    cout<< "Account created with account number: "<< accounts[accountCount].getAccountNumber()<< endl;
                    accountCount++;
                } else {
                    cout<< "Maximum number of accounts reached."<<endl;
                }
                break;
            }
            case 2: {
                int accountToDeposit;
                int depositAmount;
                cout<< "Enter account number: "<<endl;
                cin>> accountToDeposit;
                for (int i = 0; i < accountCount; i++) {
                    if (accountToDeposit == accounts[i].getAccountNumber()) {
                        cout<< "Enter deposit amount: "<<endl;
                        cin>> depositAmount;
                        accounts[i].deposit(depositAmount);
                        break;
                    }
                }
                break;
            }
            case 3: {
                int accountToWithdraw;
                int withdrawAmount;
                cout<< "Enter account number: "<<endl;
                cin>> accountToWithdraw;
                for (int i=0; i<accountCount; i++) {
                    if (accountToWithdraw == accounts[i].getAccountNumber()) {
                        cout<<"Enter withdrawal amount: "<<endl;
                        cin>>withdrawAmount;
                        accounts[i].withdraw(withdrawAmount);
                        break;
                    }
                }
                break;
            }
            case 4:
                cout<<"visit again !"<<endl;
                return 0;
            default:
                cout<< "Invalid choice. "<<endl;
        }
    }
}
else{
	cout<<"password not correct"<<endl;
}
    return 0;
}

