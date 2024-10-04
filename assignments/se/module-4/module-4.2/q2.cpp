// q2. Define a class to represent a bank account. Include the following members:
//1. Data Member:
//-Name of the depositor
//-Account Number
//-Type of Account
//-Balance amount in the account


//2. Member Functions
//-To assign values
//-To deposited an amount
//-To withdraw an amount after checking balance
//-To display name and balance

// Answer :

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    string depositorName = "krishna sharma"; 
    int accountNumber = 12345; 
    string accountType = "Savings";
    float balance = 10000;

public:
    void displayDetails() {
        cout<<"Depositor Name: "<<depositorName<<endl;
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Account Type: "<<accountType<<endl;
        cout<<"Balance: Rs"<<balance<<endl;
    }

    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout<<"Amount deposited successfully. Current balance: Rs"<<balance  <<endl;
        } else {
            cout<<"Invalid deposit amount."<<endl;
        }
    }
    void withdraw(float amount) {
        if (amount > balance) {
            cout<<"Insufficient balance! Withdrawal failed."<<endl;
        } else if (amount > 0) {
            balance -= amount;
            cout<<"Amount withdrawn successfully. Current balance: Rs"<<balance <<endl;
        } else {
            cout<<"Invalid withdrawal amount."<<endl;
        }
    }
};

int main() {
    BankAccount account;
    string action;
    float amount;
    account.displayDetails();

    while (true) {
        cout<<"What do you want to do? (deposit/withdraw/exit): "<<endl;
        cin>>action;

        if (action == "deposit") {
            cout<<"Enter amount to deposit: "<<endl;
            cin>>amount;
            account.deposit(amount);
        } else if (action == "withdraw") {
            cout<<"Enter amount to withdraw: "<<endl;
            cin>>amount;
            account.withdraw(amount);
        } else if (action == "exit") {
            cout<<"Exiting the program."<<endl;
            break;
        } else {
            cout<<"Invalid action. Please enter deposit, withdraw, or exit."<<endl;
        }
    }

    return 0;
}
