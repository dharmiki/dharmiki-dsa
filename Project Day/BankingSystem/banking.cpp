#include<iostream>
using namespace std;

class BankAccount{

    protected:

    int accountNumber;
    string accountHolderName;
    double balance;

    public:

    void value(int accountNumber, string accountHolderName, double balance) 
    {
        this->accountNumber = accountNumber;
        this->accountHolderName = accountHolderName;
        this->balance = balance;
    }

    

    void deposit(double amount)
    {

        if (amount > 0) 
        {
            cout << balance << " + " << amount << " = ";
            balance += amount;
            cout << balance << endl;
        } 
        else {
            cout << "Please don't enter 0!" << endl;
        }
        cout << "----------------------------------------------" << endl;

    }

    void withdraw(double amount)
    {
        
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << " New Balance: " << balance << endl;
        }
        else
        {
            cout << "Insufficient funds!" << endl;
        }

    }

    
    double getBalance()
    {

        return balance;
        
    }

    void displayAccountInfo()
    {

        cout << "Account number: " << this->accountNumber << endl;
        cout << "Account holder name: " << this->accountHolderName << endl;
        cout << "Account balance: " << this->balance << endl;
        cout << "----------------------------------------------" << endl;

    }

    
};

class SavingAccount:public BankAccount
{

    double interestRate;

    public:

    void calculateInterest(double interestRate)
    {
        this->interestRate = interestRate;
        double interest = balance * (interestRate / 100);
        balance += interest;
        cout << "Interest Added: " << interest << " New Balance: " << balance << endl;
        cout << "----------------------------------------------" << endl;
    }

};

class CheckingAccount:public BankAccount
{

    double overdraftLimit;

    public:

    void checkOverdraft(double withdrawalAmount, double overdraftLimit) 
    {
        this->overdraftLimit = overdraftLimit;
        if (withdrawalAmount <= getBalance() + overdraftLimit) 
        { 
            double calculate = withdrawalAmount - (getBalance() + (getBalance() * 5) / 100); 
            cout << withdrawalAmount << " - " << (getBalance() + (getBalance() * 5) / 100) << " = " << calculate << endl;
        }
        else {
            cout << "Overdraft limit reached!!!" << endl;
        }
        cout << "----------------------------------------------" << endl;
    }

};


class FixedDepositAccount:public BankAccount
{

    int term;

    public:

    void calculateInterest(double interestRate, double amount) 
    {
        if (amount <= getBalance()) {
            cout << "Enter F.D. duration in months: ";
            cin >> term;
    
            double interest = (amount * interestRate * term) / 100;
            cout << "F.D. interest: " << interest << endl;
            cout << amount << " + " << interest << " = " << amount + interest << endl;
        } 
        else {
            cout << "F.D. amount bank balance is::" << endl;
        }
        cout << "----------------------------------------------" << endl;
    }

};

int main(){

    cout << "----------Banking System----------" << endl;

    int accountNumber,choice;
    string accountHolderName;
    double balance, amount, withdrawalAmount, overdraftLimit;

    cout << "Enter account number: ";
    cin >> accountNumber;

    cout << "Enter account holder name: ";
    cin >> accountHolderName;

    cout << "Enter account balance: ";
    cin >> balance;
    cout << "----------------------------------------------" << endl;

    SavingAccount account;
    account.value(accountNumber, accountHolderName, balance);
    
    CheckingAccount check;
    
    FixedDepositAccount fd;

    do {

        cout << "------ Banking System Options ------" << endl;
        cout << "Press 1 for Deposit amount" << endl;
        cout << "Press 2 for Withdraw amount" << endl;
        cout << "Press 3 for Display Account Information" << endl;
        cout << "Press 4 for Saving account Interest" << endl;
        cout << "Press 5 for Check Overdraft" << endl;
        cout << "Press 6 for Fixed Deposit Interest" << endl;
        cout << "Press 0 for Exit" << endl;

        cout << "Enter your option: ";
        cin >> choice;
        cout << "----------------------------------------------" << endl;

        switch (choice) 
        {
        case 1:
            cout << "Enter deposit amount: ";
            cin >> amount;
            account.deposit(amount);
            break;
        case 2:
            cout << "Enter withdraw amount: ";
            cin >> amount;
            account.withdraw(amount);
            break;
        case 3:
            account.displayAccountInfo();
            break;
        case 4:
            account.calculateInterest(7); 
            break;
        case 5: 
            check.value(accountNumber, accountHolderName, account.getBalance());

            cout << "Enter overdraft limit: ";
            cin >> overdraftLimit;

            cout << "Enter withdrawal amount: ";
            cin >> withdrawalAmount;

            check.checkOverdraft(withdrawalAmount,overdraftLimit);
            break;
        case 6: 
            fd.value(accountNumber, accountHolderName, account.getBalance());

            cout << "Enter F.D. amount:: ";
            cin >> amount;
            
            fd.calculateInterest(5,amount); 
            break;
        case 0:
            cout << "Thank you..." << endl;
            break;
        default:
            cout << "Invalid option" << endl;
            break;
        }
    } while (choice != 0);



}