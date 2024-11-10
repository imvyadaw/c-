//====IM_VYADAW====
#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(string accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance >= 0 ? initialBalance : 0; // Ensure non-negative initial balance
    }

    // Getter for balance
    double getBalance() const {
        return balance;
    }

    // Method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. New balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount. Please enter a positive value." << endl;
        }
    }

    // Method to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        } else {
            cout << "Invalid withdrawal amount. Please enter a positive value less than or equal to your current balance." << endl;
        }
    }
};

int main() {
    BankAccount account("1234567890", 1000.0);

    account.deposit(500.0);
    account.withdraw(200.0);
    cout << "Current Balance: " << account.getBalance() << endl;

    return 0;
}