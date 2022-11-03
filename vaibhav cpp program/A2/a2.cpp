#include <iostream>
using namespace std;

class A
{

    int a,b;
    int c,e,d;
    float f;
public: 
   
    void add()
    {
        cout << "enter the number of a = ";
        cin >> a;
          cout << "enter the number of b = ";
        cin >> b;
        {
            c = a + b;
            d = a - b;
            e = a * b;
            f = (float)a / b;
        }
      cout<<"addtional of"<<a<<"and"<<b<<" ="<<c<<endl;
      cout<<"Subtraction of"<<a<<"and"<<b<<" ="<<d<<endl;
      cout<<"multipication of"<<a<<"and"<<b<<" ="<<e<<endl;
      cout<<"division of"<<a<<"and"<<b<<" ="<<f<<endl;


    }
};
int main()
{ A s1;
s1.add ();
    return 0;
}       