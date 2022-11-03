#include <iostream>
using namespace std;
class fibonacci
{

    int a, b, c, n;

public:
    fibonacci()
    {
        a = 0;
        b = 1;
        cout << "enter the number";
        cin >> n;
        for (int i = 1; i < n; i++)
        {
            cout << a << endl;
            c = a + b;
            a = b;
            b = c;
        }
    }
};
int main()
{
fibonacci f1;
    return 0;
}