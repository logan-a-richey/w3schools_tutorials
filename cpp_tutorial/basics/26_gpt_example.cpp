// Access Specifiers - more complex example

#include <iostream>
#include <string>
//using namespace std;

class BankAccount {
    // Private: Only accessible within the class
private:
    std::string accountHolder;
    double balance;

    // Private function to check balance, which should not be directly accessed from outside
    void updateBalance(double amount) {
        balance += amount;
    }

public:
    // Public: Can be accessed from anywhere
    BankAccount(std::string holder, double initialBalance) {
        accountHolder = holder;
        balance = initialBalance;
    }

    // Public: Function to access the balance safely
    double getBalance() {
        return balance;
    }

    // Public: Function to deposit money, which updates balance
    void deposit(double amount) {
        if (amount > 0) {
            updateBalance(amount);  // We use the private function to modify the balance
            std::cout << "Deposited " << amount << " into account." << std::endl;
        } else {
            std::cout << "Amount must be positive!" << std::endl;
        }
    }

    // Public: Function to withdraw money, checks for sufficient balance
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            updateBalance(-amount);  // We use the private function to modify the balance
            std::cout << "Withdrew " << amount << " from account." << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount!" << std::endl;
        }
    }
};

// Derived class (Inheritance example)
class SavingsAccount : public BankAccount {
    // Protected: Can be accessed by the base class and derived classes
protected:
    double interestRate;

public:
    SavingsAccount(std::string holder, double initialBalance, double rate)
        : BankAccount(holder, initialBalance) {
        interestRate = rate;
    }

    void applyInterest() {
        double interest = getBalance() * interestRate;
        deposit(interest);
        std::cout << "Applied interest: " << interest << std::endl;
    }
};

int main() {
    // Create a BankAccount object
    BankAccount account1("John Doe", 1000.00);

    // Access public methods to interact with the account
    std::cout << "Initial Balance: " << account1.getBalance() << std::endl;

    // Deposit and withdraw money
    account1.deposit(500);
    account1.withdraw(200);

    // Try to directly access private members (This will cause an error)
    // account1.balance = 5000;  // Error: 'balance' is private

    std::cout << "Final Balance: " << account1.getBalance() << std::endl;

    // Create a SavingsAccount object
    SavingsAccount savings1("Jane Doe", 1000.00, 0.05);
    savings1.applyInterest();  // Applying interest to the savings account

    std::cout << "Final Balance after interest: " << savings1.getBalance() << std::endl;

    return 0;
}

