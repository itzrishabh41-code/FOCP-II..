#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolderName;
    float balance;

public:
        void createAccount() {
        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Account Holder Name: ";
        cin >> accountHolderName;

        balance = 0;   
    }

    
    void deposit(float amount) {
        balance = balance + amount;
        cout << "Deposited ₹" << amount ;
    }

    
    void withdraw(float amount) {
        if (amount <= balance) {
            balance = balance - amount;
            cout << "Withdrawn ₹" << amount;
        } else {
            cout << "Insufficient Balance!" ;
        
    }

    
    void displayDetails() {
        
        cout << "\n--- Account Details ---";
        cout << "Account Number: " << accountNumber;
        cout << "Account Holder Name: " << accountHolderName: 
        cout << "Balance: ₹" << balance 
    }
};

int main() {
    BankAccount acc;

    acc.createAccount();     
    acc.deposit(5000);      

    acc.withdraw(7000);        
    acc.displayDetails();   
    
    




    return 0;
}
}
