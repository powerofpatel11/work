#include <iostream>
using namespace std;
class matrix
{
    int i, j, a[3][3], b[3][3],c[3][3];

public:
    void accept()
    {
        cout << "enter the frist matrix\n";
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cout << "a [" << i << "][" << j << "] : ";
                cin >> a[i][j];
            }
        }
        cout << "enter the second matrix\n";

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cout << "b [" << i << "][" << j << "] : ";
                cin >> b[i][j];
            }
        }
    }
    void display()
    {
        cout << "your frist matrix\n ";
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cout << " " << a[i][j];
            }
            cout << endl;
        }
    
    
        cout << "your second  matrix \n";
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cout << " " << a[i][j];
            }
            cout << endl;



        }


        
        cout << "addition  both   matrix \n";
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                c[i][j]=a[i][j]+b[i][j];
                cout<<" "<<c[i][j];

            }
            cout << endl;
        }
    }
};

int main()
{ matrix A1;
A1.accept();
A1.display();
    return 0;
}
                         

        



                         