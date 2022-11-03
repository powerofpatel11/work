#include <iostream>
using namespace std;
class person
{
protected:
    string name;
    int age;

public:
    void setdata1()
    {
        cout << "enter the name : ";
        cin >> name;
        cout << "enter your age : ";
        cin >> age;
    }
};
class student : public person
{

protected:
    int i, n;

    int total;
    float percentage;
    int s1, s2, s3;
    int s4;

public:
    void setdata2()
    {

        cout << "enter the frist subjet markes : ";
        cin >> s1;
        cout << "enter the second subjet markes : ";
        cin >> s2;
        cout << "enter the third  subjet markes : ";
        cin >> s3;
        total = s1 + s2 + s3;

        cout << "total marks of subject = " << total << endl;
        cout << "percentage of = " << (total / 3) << endl;
    }
};
class techers 
{
protected:
    int salary;

public:
    void setdata3()
    {
        cout << "salary of teacher member";
        cin >> salary;
    }
};
class A : public techers, public student
{
public:
    void displaydata()
    {
       cout<<"__________BASIC INFORMATION______________"<<endl<<endl;
        cout << "your name of = " << name << endl;
        cout << "your are = " << age << endl;
        cout << "total markes = " << total << endl;
 
        cout << "your percentage  = " << total/3 << endl;
        cout << "teacher salary of = " << salary << endl;
    }
};

int main()
{
    A a1;
    a1.setdata1();
    a1.setdata2();
    a1.setdata3();
    a1.displaydata();

    return 0;
}