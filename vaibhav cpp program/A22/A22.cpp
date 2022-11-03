//  Assume that a bank maintains two kinds of accounts for customer, one called
// as saving account and other as current accounts provides Simple interest and
// withdraw facilities
// but no cheque book facility. The current account provides cheque book facility but
// no interest. Current account holders should maintain a minimum balance and if the
// balance falls below this level a service charges is imposed

#include <iostream>
using namespace std;
class bank
{
protected:
    string name;
    int account_no;
    string types;
    int balance;
    int n;
    int n1;
    int n2;
    int deposit;
    int deposit1;
    int withdraw;
    int withdraw1;
    float rate;
    int year;
    int Si;
    int showdata;
    int charge,totalcharge;
    int p, q = 9644;

public:
    void setdata1()
    {
        cout << "Enter PIN : ";
        cin >> p;

        if (p == q)
        {
            cout << " Account Holder name = ";
            cin >> name;
            cout << "Enter Account number = ";
            cin >> account_no;

            cout << "Enter your Balance = ";
            cin >> balance;
            cout << "press key 1 for saving account " << endl
                 << endl;
            cout << "press key 2 for currunt account " << endl
                 << endl;
            cout << "Enter Your Choice : ";
            cin >> n;
            switch (n)
            {
            case 1:
            {
                cout << "press 1 for deposit" << endl
                     << endl;
                cout << "press 2 for withdraw" << endl
                     << endl;
                cout << "press 3 for cheque book" << endl
                     << endl;
                cout << "Enter Your Choice : ";
                cin >> n1;

                switch (n1)
                {

                case 1:
                {
                    cout << endl
                         << "Enter Ammount For Deposit =";
                    cin >> deposit;
                    balance = balance + deposit;
                    cout << "Available balance = " << balance << endl;
                    break;
                }
                case 2:
                {
                    cout << "Enter ammount For withdraw =";
                    cin >> withdraw;
                    if (withdraw <= balance && withdraw <= 20000)
                    {
                        cout << "succsesfully withdraw ...." << endl;
                        balance = balance - withdraw;
                        cout << "Remaining Balance in Account = " << balance << endl
                             << endl;
                    }
                    else
                    {
                        cout << "Please Enter Ammount  Below  20000/-..." << endl;
                    }
                    cout << " Total Available  balance = " << balance << endl;
                    break;
                }
                case 3:
                {
                    cout << "Cheque book fecility is Not available in Savings Account....!!!" << endl;
                    break;
                }
                }

                cout << "You can get interest in Your Balance " << endl
                     << endl;
                rate = 11.5;
                cout << "Enter year For Interese : ";
                cin >> year;

                Si = (balance * rate * year) / 100;
                balance = balance + Si;

                cout << "Your Interset = " << Si << endl
                     << endl;
                cout << "Total Balance = " << balance << endl
                     << endl
                     << endl;

                cout << "-------------- Account inormation below OR mini statement ------------" << endl
                     << endl;
                cout << "Account holder name = " << name << endl;
                cout << "Acoount Number = " << account_no << endl;
                cout << "Total balance = " << balance << endl;
                break;
            }

            case 2:
            {
                cout << "press 1 for deposit" << endl
                     << endl;
                cout << "press 2 for withdraw" << endl
                     << endl;
                cout << "press 3 for cheque book" << endl
                     << endl;
                cout << "Enter Your Choice : ";
                cin >> n2;

                switch (n2)
                {

                case 1:
                {
                    cout << endl
                         << "Enter Ammount For Deposit =";
                    cin >> deposit1;
                    balance = balance + deposit1;
                    cout << "Available balance = " << balance << endl;
                    break;
                }
                case 2:
                {
                    cout << "Enter ammount For withdraw =";
                    cin >> withdraw1;

                    int balance3=balance - withdraw1;
                    if(balance<=10000){
                        totalcharge=(balance*2)/100; 
                        cout<<"charge"<<totalcharge<<endl<<endl;
                        showdata=balance-totalcharge;

                        cout<<"show in balance--->"<<showdata<<endl;
                         cout << " Available  balance = " << showdata << endl;
                    cout<<"your Account is low balance ....please deposite ammount other wise charge.."<<endl<<endl;

                    }
                    else if(withdraw1 < balance &&(balance3 >= 10000))
                    {
                        cout << "succsesfully withdraw ...." << endl;
                        balance = balance - withdraw1;
                        cout << "Remaining Balance in Account = " << balance << endl
                             << endl;
                              cout << " Total Available  balance = " << balance << endl;
                    }
                    else
                    {
                        cout << "Minimum Balance Required ....." << endl;
                         cout << " Total Available  balance = " << balance << endl;
                    }
                    //cout << " Total Available  balance = " << balance << endl;
                    break;
                }
                case 3:
                {
                    cout << "Cheque book fecility is  available in currunt  Account....!!!" << endl
                         << endl;
                    cout << "Successfully Applying cheque book request ........ " << endl<<endl;
                    cout << "Cheque book Will delivaray in 15 day At Home Adderess ..."<<endl;
                     break;
                }
                }

                break;
            }
            default:{

            cout<<"Please Enter valid key ";
                break;
                }

            }
        }
        else{

            cout<<"Enter Correct PIN";
        }
    }
};

// class Saving :public bank {
// protected:
//     int principal;
//     int rate;
//     int year;
//     int withdraw;
//     int si;
//     public:
//     void setdata2(){
//         cout<<"Account holder name = : "<<name<<endl;
//         cout<<"your Account number = : "<<account_no<<endl;
//         cout<<"your account types = : "<<types<<endl;
//         cout<<"you interested find out simple interest = yes "<<endl;
//         cout<<"enter your principal = :";
//         cin>>principal;
//         cout<<"enter your rate = : ";
//         cin>>rate;
//         cout<<"enter of time = :";
//         cin>>year;
//         si=(principal*rate*year)/100;
//         cout<<"looking your simple interest = :"<<si<<endl;
//         cout<<"How many withdraw in ammount = :";
//         cin>>withdraw;
//         if (withdraw <= balance && withdraw <= 20000)
//         {
//             cout << "succsesfully withdraw ...." << endl;
//             balance=balance-withdraw;
//             cout<<"available Balance in Account =: "<<balance<<endl<<endl;
//         }
//         else
//         {
//             cout << "not sufficient balance..." << endl;
//         }

//         cout<<"so sorry....!! cheque book fecility is not avalible for saving Account ";

//     }
// };

int main()
{

    bank b1;
    b1.setdata1();
    return 0;
}
