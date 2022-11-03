#include <iostream>
using namespace std;
class Bank
{
    string name;
    int no;
    string type;
    int balance;
    int withdraw;
    int deposit;

public:
    void enter()
    {
        cout << "enter your name " << endl;
        cin >> name;
        cout << "enter the account number " << endl;
        cin >> no;
        cout << "type of account " << endl;
        cin >> type;
        cout << "enter your balance"<< endl;
        cin >> balance;
    }
    void Diposit()
    {
        cout << "enter diposit amount" << endl;
        cin >> deposit;
        balance = balance + deposit;
        cout << "total amount of " << balance << endl;
    }

    void Withdraw()
    {
        cout << "enter withdraw amount =   ";
        cin >> withdraw;
        if (balance >= withdraw)
        {
            balance = balance - withdraw;
            cout << "remaing balance =" << balance << endl;
        }
        else
        {
            cout << "enter valid amount " << endl;
        }
    }
    void diplay()
    {
        cout << endl;
        cout << "Account Information" << endl;
        cout << endl;
        cout << "Account Holder Name" << name << endl<<endl;
        cout << "Your Account Number  " << no << endl<<endl;
        cout << "Account Type " << type << endl<<endl;
        cout << "Available Balance " << balance << endl<<endl;
    }
 void all(){
     enter();
     Diposit();
     Withdraw();
     diplay();

 }

};

int main()
{
    Bank a1;
    a1.all();
    

    return 0;
}