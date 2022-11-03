#include <iostream>
using namespace std;

class cricketer
{
protected:
    string name;
    int runs[100];
    int max = 0;
    int n;
    int i;
    int total = 0;
};

class Batsman : public cricketer
{
public:
    void set()
    {
        cout << "Enter Player Name : " ;
        cin >> name;
        cout << "Number Of Matches : " ;
        cin >> n;

        cout << "Runs Score in " << n << " innings : " << endl;

        for (i = 0; i < n; i++)
        

        {

            cout << i + 1 << " Match : " ;
            cin >> runs[i];
        }

        for (i = 0; i < n; i++)
        {

            total = total + runs[i];
        }
        cout << "Total Runs : " << total << endl;

        cout << "Average : " << total / n << endl;

        for (i = 0; i < n; i++)
        {

            if (runs[i] 
            > max)
            {
               
                max = runs[i];
            }
        }
        cout << "Highest Score OR Best Performance: " << max << endl;
    }
};

int main()
{
    Batsman a1;
    a1.set();

    return 0;
}
