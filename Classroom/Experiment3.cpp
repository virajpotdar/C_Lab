// Implement banking system for user
#include <iostream>
#include <string>
using namespace std;
class Ac
{
public:
    string Acno, name;
    double balance;

    void openAc()
    {
        cout << "Enter account no: ";
        cin >> Acno;

        if (Acno.size() != 10)
        {
            cout << "Account number must be 10 digits\n";
            exit(0);
        }
        cout << "Enter your name: ";
        cin.ignore();
        getline(cin, name);
        balance = 5000;
    }

    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposited: " << amount << "\n";
    }

    void withdraw(double amount)
    {
        if (amount > balance)
        {
            cout << "No Balance in your Account!\n";
        }
        else
        {
            balance -= amount;
            cout << "Withdrawal: " << amount << "\n";
        }
    }
   void displayStatement();
   
};
 void Ac::displayStatement()
    {
        cout << "\n----Your Account Details ----\n";
        cout << "Account Number: " << Acno << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }

class SavingAc : public Ac
{
public:
    void withdraw(double amount)
    { 
        if (balance - amount < 0)
        {
            cout << "Can't withdraw as balance will be negative!\n";
        }
        else
        {
            Ac::withdraw(amount);
        }
    }
};

class CheckingAc : public Ac
{
public:
    void withdraw(double amount)
    { 
        if (amount > balance + 1000)
        {
            cout << "limit exceeded!\n";
        }
        else
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << "\n";
        }
    }
};

int main()
{
    CheckingAc c1;
    char choice;
    double amount;

    cout << "Open your Checking Account\n";
    c1.openAc();
    c1.displayStatement();

    char k = 'y';
    while (k == 'y' || k == 'Y')
    {
        cout << "\nDo you want to deposit or withdraw (d/w)?: ";
        cin >> choice;

        if (choice == 'd' || choice == 'D')
        {
            cout << "Enter amount to deposit: ";
            cin >> amount;
            c1.deposit(amount);
        }
        else if (choice == 'w' || choice == 'W')
        {
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            c1.withdraw(amount);
        }
        else
        {
            cout << "Invalid transaction \n";
        }

        c1.displayStatement();

        cout << "\nDo you want another transaction? (y/n): ";
        cin >> k;
    }

    cout << "Thank you for using the banking system!\n";
    return 0;
}
