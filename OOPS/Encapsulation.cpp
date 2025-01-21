#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    // Constructor to initialize account details
    BankAccount(string name, double initialDeposit) {
        accountHolder = name;
        balance = initialDeposit;
    }

    // Getter method for balance (read-only access)
    double getBalance() {
        return balance;
    }

    // Setter method for depositing money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Setter method for withdrawing money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance!" << endl;
        }
    }
};

int main() {
    BankAccount acc("John Doe", 1000.0);

    // Accessing account details through public methods
    cout << "Initial Balance: " << acc.getBalance() << endl;

    acc.deposit(500);
    cout << "Updated Balance: " << acc.getBalance() << endl;

    acc.withdraw(300);
    cout << "Final Balance: " << acc.getBalance() << endl;

    return 0;
}

/* Private Members:

accountHolder and balance are marked as private, so they cannot be accessed directly from outside the class.
Public Methods:

The class provides controlled access to balance through the public methods getBalance(), deposit(), and withdraw().
Data Security:

Direct modification of balance is not possible, ensuring the integrity of the account.
Real-Life Analogy of Encapsulation
Think of a vending machine:

The machine's internal mechanism (how it dispenses items or counts money) is hidden from you.
You interact with it only through its interface (buttons for selecting items and the slot for inserting money).
This prevents you from tampering with its internal mechanism and ensures it works as intended.
In C++, encapsulation ensures that your objects behave like a vending machine: exposing only what is necessary and hiding the rest!

 */
