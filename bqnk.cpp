#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNumber) : accountNumber(accNumber), balance(0) {}
    void deposit(double amount) {
        balance += amount;
        cout << "Deposit of $" << amount << " successful." << endl;
    }
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful." << endl;
        } else {
            cout << "Insufficient funds." << endl;
        }
    }

    // Function to get balance
    double getBalance() {
        return balance;
    }

    // Function to transfer money to another account
    void transfer(BankAccount& otherAccount, double amount) {
        if (balance >= amount) {
            balance -= amount;
            otherAccount.deposit(amount);
            cout << "Transfer of $" << amount << " successful." << endl;
        } else {
            cout << "Insufficient funds for transfer." << endl;
        }
    }

    // Function to print account details
    void printDetails() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

// Define a class for banking system
class BankingSystem {
private:
    vector<BankAccount> accounts;

public:
    // Function to create account
    void createAccount(string accountNumber) {
        accounts.push_back(BankAccount(accountNumber));
        cout << "Account created successfully." << endl;
    }

    // Function to find account by account number
    BankAccount* findAccount(string accountNumber) {
        auto it = find_if(accounts.begin(), accounts.end(),
                          [accountNumber](const BankAccount& acc) { return acc.getAccountNumber() == accountNumber; });
        if (it != accounts.end()) {
            return &(*it);
        } else {
            return nullptr;
        }
    }

    // Function to deposit money to account
    void deposit(string accountNumber, double amount) {
        BankAccount* account = findAccount(accountNumber);
        if (account != nullptr) {
            account->deposit(amount);
        } else {
            cout << "Account not found." << endl;
        }
    }

    // Function to withdraw money from account
    void withdraw(string accountNumber, double amount) {
        BankAccount* account = findAccount(accountNumber);
        if (account != nullptr) {
            account->withdraw(amount);
        } else {
            cout << "Account not found." << endl;
        }
    }

    // Function to get balance of account
    void balanceInquiry(string accountNumber) {
        BankAccount* account = findAccount(accountNumber);
        if (account != nullptr) {
            cout << "Balance for account " << accountNumber << " is $" << account->getBalance() << endl;
        } else {
            cout << "Account not found." << endl;
        }
    }

    // Function to transfer money between accounts
    void transfer(string fromAccount, string toAccount, double amount) {
        BankAccount* from = findAccount(fromAccount);
        BankAccount* to = findAccount(toAccount);
        if (from != nullptr && to != nullptr) {
            from->transfer(*to, amount);
        } else {
            cout << "One or more accounts not found." << endl;
        }
    }

    // Function to print all account details
    void printAllAccounts() {
        cout << "----- All Accounts -----" << endl;
        for (BankAccount& acc : accounts) {
            acc.printDetails();
            cout << "------------------------" << endl;
        }
    }
};

int main() {
    // Sample usage
    BankingSystem bank;

    // Creating accounts
    bank.createAccount("123456");
    bank.createAccount("654321");

    // Depositing money
    bank.deposit("123456", 1000);
    bank.deposit("654321", 500);

    // Withdrawing money
    bank.withdraw("123456", 200);

    // Transferring money
    bank.transfer("123456", "654321", 300);

    // Balance inquiry
    bank.balanceInquiry("123456");
    bank.balanceInquiry("654321");

    // Printing all accounts
    bank.printAllAccounts();

    return 0;
}

