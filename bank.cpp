#include<iostream>
#include<string>
using namespace std;
class BankAccount{
	private:
		string accountholder;
		double initial_balance;
	public:
	BankAccount(string name,double balance):accountholder(name),initial_balance(balance){}
	void deposit(double amt){
		if(amt>0){
			balance+=amt;
			cout<<"Desposited Money: Rs."<<amt<<"\nBalance: Rs."<<balance;
		}
		else
		cout<<"Desposited amount must be positive....."<<endl;
	}
void withdraw(double amt){
	if(amt>0 && amt<=balance){
		balance-=amt;
	cout<<"Money withdrawed: Rs."<<amt<<"\nNew Balance: Rs."<<balance;
}
	else if(amt>balance)
	cout<<"Enter proper amount.";
	else
	cout<<"Amount entered must be positive...."<<endl;
}	
void checkBalance(){
	cout<<"Current balance:"<<balance<<endl;
}
};
int main(){
	string name;double initial_balance=100000;
	getline(cin,name);

	
	BankAccount account(name,initial_balance);
	int choice;
	do{
		cout<<"1.Deposit Money\n2.Withdraw Money\n3.Check Balance\n4.Exit\n";
		cin>>choice;
		switch(choice){
			case 1:
				double amt;
				cout<<"Enter amount to be deposited: ";
				cin>>amt;
				account.deposit(amt);
				break ;
			 case 2: {
                double amount;
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                account.withdraw(amt);
                break;
            }
            case 3:
                account.checkBalance();
                break;
            case 4:
                cout << "Exiting program." << std::endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << std::endl;
                break;
        }
    } while (choice != 4);

    return 0;
}
