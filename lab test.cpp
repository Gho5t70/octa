/* program to create an account class accept details from user add member variables with private access specifier,create friend function of account class 
and display the information entered by the student in account class in friend function*/  
#include "iostream"
#include "string"
using namespace std;
class Account {
private:
    string accountNumber;
    string accountHolderName;
    double balance;
    public:
    Account(string accNum, string accHolder, double bal) : accountNumber(accNum), accountHolderName(accHolder), balance(bal) {}
     friend void displayAccountDetails(const Account& acc);
};
void displayAccountDetails(const Account& acc) {
    cout << "Account Number: " << acc.accountNumber << endl;
    cout << "Account Holder's' Name: " << acc.accountHolderName << endl;
    cout << "Balance: Rs." << acc.balance << endl;
}
int main() {	
    string accNum, accHolder;
    double bal;
    cout << "Enter account no: ";
    cin >> accNum;
    cout << "Enter account holder's' name: ";
    cin.ignore(); 
    getline(cin, accHolder);
    cout << "Enter balance: ";
    cin >> bal;
    Account myAccount(accNum, accHolder, bal);
    displayAccountDetails(myAccount);
    return 0;
}





   
   
