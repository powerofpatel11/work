#include <iostream>
using namespace std;
class student
{
protected:
    string name;
    string branch;
    int Roll_no;
    public:
    void setdata()
    {
        cout << "Enter Your Name : ";
        cin >> name;
        cout << "Enter Your Roll Number : ";
        cin >> Roll_no;
        cout << "Enter Your Branch Name : ";
        cin >> branch;
    }
};
class test : public student
{
protected:
    int s1;
    int s2;
    int total;
    int percentage;
    public:
    void setdata2()
    {
        cout << "Enter Your Frist Subject Mark = ";
        cin >> s1;
        cout << "Enter Your Second Subject Mark = ";
        cin >> s2;
        total = s1 + s2;
        percentage = total / 2;
    }
};

class Result : public test
{
public:
    void displaydata()
    {
        cout << "_______________Basic Inforamation_________________" << endl
             << endl;
        cout << " Name : " << name << endl;
        cout << " Roll Number : " << Roll_no << endl;
        cout << " branch : " << branch << endl;
        cout << " Frist Subject Mark : " << s1 << endl;
        cout << " Second Subject Mark : " << s2 << endl;
        cout << "Total Marks : " << total << endl;
        cout << "Percentage of : " << percentage << endl;
    }
};

int main()
{

    Result r1;
    r1.setdata();
    r1.setdata2();
    r1.displaydata();

    return 0;
}
