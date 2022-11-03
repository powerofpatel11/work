#include <iostream>
using namespace std;
class A
{

    int roll_no;

    int sub1, sub2, sub3;
    int total;
    float percentage;

public:
    void setdata()

    {

        cout << "enter your roll number " << endl;
        cin >> roll_no;
        cout << "enter your frist subject markes" << endl;
        cin >> sub1;
        cout << "enter your second subject markes" << endl;
        cin >> sub2;
        cout << "enter your third subject markes" << endl;
        cin >> sub3;
        total = sub1 + sub2 + sub3;
        percentage = (sub1 + sub2 + sub3) / 3;
    }

void displaydata()
{
    cout <<roll_no<<"             "<<sub1 <<"      "<< sub2 <<"      "<< sub3 <<"      "<<total<<"      "<<percentage<<endl;
}
};


int main()
{
    A a[4];
    for (int i = 1; i < 5; i++)
    {
        a[i].setdata();
    }
    cout<<"\nrollnumber    sub1    sub2    sub3   total    percentage "<<endl;
    for (int i = 1; i < 5; i++)
    {
        a[i].displaydata();
    }


    return 0;
}