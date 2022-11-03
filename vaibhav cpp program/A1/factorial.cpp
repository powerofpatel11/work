#include <iostream>
using namespace std;
class factorial
{

    int n;

public:
int fact=1;
    void facto()
    {

        cout << "enter the number ";
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            
            fact = (fact * i);
        }
        cout<<"Factorial = "<<fact<<endl;
    }
};

int main()
{
    factorial a1;
    a1.facto();

    return 0;
}