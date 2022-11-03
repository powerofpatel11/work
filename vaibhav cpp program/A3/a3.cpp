#include <iostream>
using namespace std;
class matrix
{
     int i, j, a[3][3];

public:
     void accept()
     {
          for (int i = 0; i < 3; i++)
          {
               for (int j = 0; j < 3; j++)
               {
                         
                 cout<<"a["<<i<<"]["<<j<<"] : ";
                         cin>>a[i][j];
               }
          }
     }
     void display()

     {
          for (int i = 0; i < 3; i++)
          {
               for (int j =0; j <3; j++)
               {
                    cout << " " << a[i][j];
               }
               cout << endl;
          }
     }
};

int main()
{
     matrix m;
     m.accept();
     m.display();
     return 0;
}

