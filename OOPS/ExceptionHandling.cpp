#include <iostream>
using namespace std;

class InsufficientFundsException {  // Custom Exception Class
public:
    string message;
    InsufficientFundsException(string msg) {
        message = msg;
    }
};

class BankAccount {
private:
    string owner;
    double balance;

public:
    BankAccount(string name, double initialBalance) {
        owner = name;
        balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: $" << amount << ". New Balance: $" << balance << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            throw InsufficientFundsException("Error: Insufficient balance for withdrawal.");
        }
        balance -= amount;
        cout << "Withdrawn: $" << amount << ". Remaining Balance: $" << balance << endl;
    }

    void checkBalance() {
        cout << "Account Balance: $" << balance << endl;
    }
};

int main() {
    try {
        BankAccount account("John Doe", 500);  // Creating a bank account with $500 balance

        account.checkBalance();  
        account.deposit(200);      // Depositing $200
        account.withdraw(600);     // Trying to withdraw $600 (Valid)
        account.withdraw(200);     // Trying to withdraw $200 (Invalid, should throw exception)
    }
    catch (InsufficientFundsException &e) {  // Catching the exception
        cout << e.message << endl;
    }

    cout << "Transaction Complete!" << endl;
    return 0;
}
