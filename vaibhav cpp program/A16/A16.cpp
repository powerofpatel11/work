#include <iostream>
using namespace std;
class calculate
{
    int a;
    int b;
    int n;

public:
    void setdata()
    {

        cout << "enter the value of a =";
        cin >> a;
        cout << "enter the value of b =";
        cin >> b;
        cout << "press key for below" << endl;
        cout << "press key 1 for addition " << endl;
        cout << "press key 2 for subtraction " << endl;
        cout << "press key 3 for multipiction  " << endl;
        cout << "press key 4 for divion" << endl;
        cin >> n;
        switch (n)
        {
        case 1:

        {

            
            cout << "additional of "<<a<<" and "<< b<<" = " << a + b << endl;
            break;
        }
        case 2:

        {

            
            cout << "subtraction of "<<a<<" and "<< b<<" =  " << a - b << endl;
            break;
        }
        case 3:

        {

            cout << "multipiction of "<<a<<" and "<< b<<" = " << a * b << endl;
            break;
        }
        case 4:

        {

            cout << "division of "<<a<<" and "<< b<<" = " << a / b << endl;
            break;
        }
        default:
        {
         cout<<"Enter your valaid key";
            break;
        }
        }
    }
};

int main()

{ 
    calculate c1;
    c1.setdata();

    return 0;
}